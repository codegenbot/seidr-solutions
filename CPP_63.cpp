/*
The FibFib number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
fibfib(0) == 0
fibfib(1) == 0
fibfib(2) == 1
fibfib(n) == fibfib(n-1) + fibfib(n-2) + fibfib(n-3).
Please write a function to efficiently compute the n-th element of the fibfib number sequence.
>>> fibfib(1)
0
>>> fibfib(5)
4
>>> fibfib(8)
24
*/
#include<stdio.h>
using namespace std;
int fibfib(int n){
	if(n == 0) return 0;
	if(n == 1) return 0;
	if(n == 2) return 1;
	int a = 0, b = 0, c = 1;
	int d = a + b + c;
	for(int i = 3; i <= n; i++){
		a = b;
		b = c;
		c = d;
		d = a + b + c;
	}
	return d;
}
int main(){
	int n;
	cin >> n;
	cout << fibfib(n) << endl;
	return 0;
}
