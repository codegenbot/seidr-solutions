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
	int a=0,b=1,c=0,i,count=2;
	while(count!=n){
		c=a+b;
		a=b;
		b=c;
		for(i=2;i<c;i++){
			if(c%i==0)
				break;
		}
		if(i==c)
			count++;
	}
	return c;
}
