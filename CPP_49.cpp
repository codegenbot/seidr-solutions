#include <bits/stdc++.h>

using namespace std;

int modp(int n,int p){
    if(p == 0) return 0;
    long long res = 1;
    for(long long i = 2; i <= n; i <<= 1)
        res = (res * 2) % p;
    return res;
}