#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (p == 1)
        return n % p;
    else if (n < p)
        return n;
    else
        return modp(n % p, p);
}