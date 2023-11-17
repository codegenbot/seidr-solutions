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
	int a=0,b=1,c=0;
	int count=0;
	while(1){
		c=a+b;
		a=b;
		b=c;
		if(c%2==0) continue;
		for(int i=3;i*i<=c;i+=2){
			if(c%i==0) goto label;
		}
		count++;
		if(count==n) break;
		label:;
	}
	return c;
}
