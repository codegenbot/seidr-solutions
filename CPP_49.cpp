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
	if(n%2==0)
		return modp((n/2)*(n/2),p);
	else
		return (2*modp((n-1)/2,p))%p;
}
int main(){
	int n,p;
	scanf("%d%d",&n,&p);
	printf("%d",modp(n,p));
}
