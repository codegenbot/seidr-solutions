#include<stdio.h>
using namespace std;
int modp(int n,int p){
    if(p==1)
        return 0;
    long long res = 1;
    for(long long i=2;i<=n;i<<=1)//i=(1<<i)
        res=res*i%p;
    return res;
}