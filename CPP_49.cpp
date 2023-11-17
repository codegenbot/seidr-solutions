/*
Return 2^n modulo p (be aware of numerics).
>>> modp(3, 5)
3
>>> modp(1101, 101)
2
>>> modp(0, 101)
1
>>> modp(3, 11)
8
>>> modp(100, 101)
1
*/
#include<stdio.h>
using namespace std;
int modp(int n,int p){
	if(n==0)
		return 1;
	else{
		long long int a=modp(n/2,p);
		a=(a*a)%p;
		if(n%2==0)
			return a;
		else
			return (a*2)%p;
	}
}
int main(){
	int n=3,p=5;
	printf("%d\n",modp(n,p));
	n=1101,p=101;
	printf("%d\n",modp(n,p));
	n=0,p=101;
	printf("%d\n",modp(n,p));
	n=3,p=11;
	printf("%d\n",modp(n,p));
	n=100,p=101;
	printf("%d\n",modp(n,p));
	return 0;
}
