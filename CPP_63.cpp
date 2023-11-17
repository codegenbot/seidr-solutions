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
	if(n==0) return 0;
	if(n==1) return 0;
	if(n==2) return 1;
	int a=0,b=0,c=1,d;
	for(int i=3;i<=n;i++){
		d=a+b+c;
		a=b;
		b=c;
		c=d;
	}
	return d;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fibfib(n));
}
