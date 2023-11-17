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
    if(n==0){
        return 1;
    }
    long long a = modp(n/2, p);
    a = (a*a)%p;
    if(n%2==1){
        a = (a*2)%p;
    }
    return a;
}
