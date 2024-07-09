#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    int pow_p = p;
    while (n > 0) {
        if (n & 1)
            res = (long long)res * pow_p % p;
        n >>= 1;
        pow_p = (long long)pow_p * pow_p % p;
    }
    return res;
}