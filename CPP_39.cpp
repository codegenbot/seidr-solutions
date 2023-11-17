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
	int a=0,b=1,c=0,i=0,count=0;
	while(1){
		c=a+b;
		a=b;
		b=c;
		if(c%2!=0){
			for(i=3;i<c;i+=2){
				if(c%i==0)
					break;
			}
			if(i==c){
				count++;
				if(count==n)
					return c;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",prime_fib(n));
	return 0;
}
