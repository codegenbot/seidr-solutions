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
	int fib4_array[n];
	fib4_array[0] = 0;
	fib4_array[1] = 0;
	fib4_array[2] = 2;
	fib4_array[3] = 0;
	for(int i = 4; i < n; i++){
		fib4_array[i] = fib4_array[i-1] + fib4_array[i-2] + fib4_array[i-3] + fib4_array[i-4];
	}
	return fib4_array[n-1];
}

int main(){
	int n = 5;
	printf("%d\n", fib4(n));
	return 0;
}
