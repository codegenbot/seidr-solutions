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
	if (n == 0) return 0;
	if (n == 1) return 1;
	int f0 = 0, f1 = 1, fi = 0;
	for (int i = 2; i <= n; i++){
		fi = f0 + f1;
		f0 = f1;
		f1 = fi;
	}
	return fi;
}
