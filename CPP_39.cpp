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
#include<iostream>
using namespace std;
int prime_fib(int n){
	int f1=2,f2=3,f3=5,c=5;
	while(1){
		if(c==n){
			return f3;
		}
		while(1){
			if(f3%f1==0){
				f3=f1+f2;
				f1=f2;
				f2=f3;
				break;
			}
			else{
				f1++;
			}
		}
		c++;
	}
}
int main(){
	int n;
	cin>>n;
	cout<<prime_fib(n);
}
