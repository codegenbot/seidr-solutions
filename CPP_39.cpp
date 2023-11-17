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
int prime_fib(int n){
	// Complete the following code
	int a=2,b=3,c=5,i,j,k=1;
	for(i=4;i<=n;i++){
		for(j=2;j<=c/2;j++){
			if(c%j==0)
				break;
		}
		if(j>c/2){
			k++;
			if(k==n)
				return c;
		}
		a=b;
		b=c;
		c=a+b;
	}
}
