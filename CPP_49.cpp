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
	int res=1;
	while(n>0){
		if(n&1) res=(res*2)%p;
		n>>=1;
	}
	return res;
}
int main(){
	printf("%d",modp(3,5));
	return 0;
}
