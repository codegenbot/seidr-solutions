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
	int result = 1;
	for (int i = 0; i < n; i++)
		result = (result * 2) % p;
	return result;
}

int main(){
	printf("%d\n", modp(3, 5));
	printf("%d\n", modp(1101, 101));
	printf("%d\n", modp(0, 101));
	printf("%d\n", modp(3, 11));
	printf("%d\n", modp(100, 101));
	return 0;
}
