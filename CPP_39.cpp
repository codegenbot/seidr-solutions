/*
prime_fib returns n-th number that is a Fibonacci number and it's also prime.
>>> prime_fib(1)
2
>>> prime_fib(2)
3
>>> prime_fib(3)
5
>>> prime_fib(4)
13
>>> prime_fib(5)
89
*/
#include<stdio.h>
using namespace std;
int prime_fib(int n){
	int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	int a[100];
	a[0]=1;
	a[1]=1;
	for(i=2;i<100;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(j=0;j<100;j++){
		for(k=2;k<a[j];k++){
			if(a[j]%k==0){
				break;
			}
		}
		if(k==a[j]){
			printf("%d\n",a[j]);
		}
	}
	return 0;
}
