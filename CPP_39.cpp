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
	int a=1,b=1,c=2,i=1,j=1,k=1;
	while(k<n){
		if(i==1&&j==1){
			c=a+b;
			a=b;
			b=c;
			i=0;
			j=0;
			k++;
		}
		else if(i==0&&j==0){
			if(c%2==0){
				c=a+b;
				a=b;
				b=c;
				i=0;
				j=0;
				k++;
			}
			else{
				for(int l=3;l<c;l+=2){
					if(c%l==0){
						i=0;
						j=1;
						break;
					}
					else{
						i=1;
						j=0;
					}
				}
				if(i==1&&j==0){
					c=a+b;
					a=b;
					b=c;
					i=0;
					j=0;
					k++;
				}
				else{
					c=a+b;
					a=b;
					b=c;
					i=0;
					j=0;
				}
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
