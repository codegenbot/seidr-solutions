#include<stdio.h>
using namespace std;
int modp(int n,int p){
    if (n == 0) return 1;
    long long result = 1, base = 2;
    while (n > 0) {
        if (n % 2 == 1) result = (result * base) % p;
        base = (base * base) % p;
        n /= 2;
    }
    return result;
}