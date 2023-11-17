/*
Return n-th Fibonacci number.
>>> fib(10)
55
>>> fib(1)
1
>>> fib(8)
21
*/
#include<stdio.h>
using namespace std;
int fib(int n){
	if(n==1 || n==2){
		return 1;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}
