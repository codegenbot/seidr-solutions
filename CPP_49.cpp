#include <stdio.h>
using namespace std;

int modp(int n,int p){
    if(p==1)
        return 0;
    int res = 1;
    for(int i=2; i<=n; i<<=1)
        res=(long long)res*2%p;
    return res;
}