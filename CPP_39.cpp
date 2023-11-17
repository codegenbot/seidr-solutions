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
	int a=2,b=3,c=5,i=5,count=2;
	if(n==1)
		return a;
	else if(n==2)
		return b;
	else if(n==3)
		return c;
	else{
		while(count<n){
			i=a+b+c;
			a=b;
			b=c;
			c=i;
			if(i%2!=0){
				int j=3;
				while(j*j<=i){
					if(i%j==0)
						break;
					j+=2;
				}
				if(j*j>i)
					count++;
			}
		}
		return i;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",prime_fib(n));
	return 0;
}
