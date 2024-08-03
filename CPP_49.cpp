#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    long long res = 1;
    for (int i = 0; i < __builtin_clz(n); i++) {
        if (!(n & 1))
            p = (long long)p * p % p;
        n >>= 1;
    }
    while (n > 0) {
        if (n & 1)
            res = (long long)res * p % p;
        n >>= 1;
        p = (long long)p * p % p;
    }
    return res;
}

int main() {
    printf("%d\n", modp(3, 5));
    printf("%d\n", modp(1101, 101));
    printf("%d\n", modp(0, 101));
    printf("%d\n", modp(3, 11));
    printf("%d\n", modp(100, 101));
    return 0;
}