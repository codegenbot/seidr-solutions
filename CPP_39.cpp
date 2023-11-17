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
	int a=1,b=1,c=0,i=2,j=0;
	while(j<n){
		c=a+b;
		a=b;
		b=c;
		i++;
		int flag=0;
		for(int k=2;k<i;k++){
			if(i%k==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			j++;
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
