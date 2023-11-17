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
	int a=1,b=1,c=2,i=3;
	while(i<=n){
		if(c%2==0){
			a=b;
			b=c;
			c=a+b;
			i++;
		}
		else{
			int j=2;
			while(j<c){
				if(c%j==0)
					break;
				j++;
			}
			if(j==c){
				a=b;
				b=c;
				c=a+b;
				i++;
			}
			else{
				a=b;
				b=c;
				c=a+b;
			}
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
