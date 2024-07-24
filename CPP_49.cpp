#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return mod(2*modp(n/2,p),p);
    else
        return mod(p,mod(p,n));
}

long long mod(long long a, long long b) {
    long long x = a % b;
    while (x > b/2)
        x -= b;
    return x;
}