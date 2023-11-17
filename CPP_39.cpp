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
	int a=1,b=1,c=2,i=2,j=0;
	while(j<n){
		if(i%2==0){
			c=a+b;
			a=b;
			b=c;
			i++;
		}
		else{
			int k=2;
			while(k<c){
				if(c%k==0)
					break;
				k++;
			}
			if(k==c){
				j++;
				cout<<c<<endl;
			}
			c=a+b;
			a=b;
			b=c;
			i++;
		}
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	cout<<prime_fib(n)<<endl;
	return 0;
}
