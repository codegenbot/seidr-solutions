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
	if(n==0) return 0;
	if(n==1) return 1;
	return fib(n-1)+fib(n-2);
}
int main(){
	printf("%d\n", fib(10));
	printf("%d\n", fib(1));
	printf("%d\n", fib(8));
	return 0;
}
