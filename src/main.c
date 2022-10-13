// #include <stdio.h>
// #include <sys/time.h>
// #include <unistd.h>
// #include <sys/mman.h>
// #include <string.h>
// #include <signal.h>
// #include <semaphore.h>
// #include <stdlib.h>
// #include <bits/types.h>
// #include <sys/shm.h>
// #include <fcntl.h>
// #include "IEC61850_type.h"
#include "threads.h"
// #include "command.h"
// //#include "sys.h"


// sem_t *sem1 = NULL;
// sem_t *sem2 = NULL;
// sem_t *sem3 = NULL;

// sem_t *mutex1_lock = NULL;
// sem_t *mutex2_lock = NULL;
// static iec61850_shm_packet_t *shm_addr;


int main(void)
{
	// int id = create_ipc(sizeof(iec61850_shm_packet_t));
	// int i1 = 0;
	// 	struct timespec waittime;
	// struct timeval nowtime;
	// iec61850_shm_packet_t *p;
	// if (id < 0)
	// {
	// 	printf("create sharememory error\n");
	// 	return 0;
	// }
    
	CreateThreads();
	while(1)
	{
	//	printf("1create sharememory  succ id=%d\n",id);
		sleep(5);

	}
	return 0;
}