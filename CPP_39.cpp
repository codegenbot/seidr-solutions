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
	int a=0,b=1,c=0,i=0,j=0,k=0;
	while(i<=n){
		c=a+b;
		a=b;
		b=c;
		for(j=2;j<c;j++){
			if(c%j==0){
				k++;
				break;
			}
		}
		if(k==0){
			i++;
		}
		k=0;
	}
	return c;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",prime_fib(n));
	return 0;
}
