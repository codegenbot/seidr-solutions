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
	int a=0,b=1,c=0,i=0,j=0;
	while(i<n){
		c=a+b;
		a=b;
		b=c;
		if(c%2!=0){
			for(j=3;j<c;j+=2){
				if(c%j==0)
					break;
			}
			if(j==c)
				i++;
		}
	}
	return c;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",prime_fib(n));
	return 0;
}
