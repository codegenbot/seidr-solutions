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
	int i;
	int a[n];
	a[0]=0;
	a[1]=1;
	if(n==1)
		return a[0];
	if(n==2)
		return a[1];
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	return a[n-1];
}
void main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fib(n));
}
