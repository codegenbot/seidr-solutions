/*
The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
fib4(0) -> 0
fib4(1) -> 0
fib4(2) -> 2
fib4(3) -> 0
fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
>>> fib4(5)
4
>>> fib4(6)
8
>>> fib4(7)
14
*/
#include<stdio.h>
using namespace std;
int fib4(int n){
	if(n==0) return 0;
	if(n==1) return 0;
	if(n==2) return 2;
	if(n==3) return 0;
	int f0=0,f1=0,f2=2,f3=0,f4=0;
	for(int i=4;i<=n;i++){
		f4=f1+f2+f3+f0;
		f0=f1;
		f1=f2;
		f2=f3;
		f3=f4;
	}
	return f4;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fib4(n));
	return 0;
}
