#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (int i = 0; i < __builtin_clz(n); i++)
        res = (res * p) % p;
    for (int i = 31; i >= 0 && n > 0; i--) {
        if (n & 1)
            res = (res * p) % p;
        p = (p * p) % p;
        n >>= 1;
    }
    return res;
}

int main() {
    printf("%d\n", modp(3, 5)); // prints: 3
    printf("%d\n", modp(1101, 101)); // prints: 2
    printf("%d\n", modp(0, 101)); // prints: 1
    printf("%d\n", modp(3, 11)); // prints: 8
    printf("%d\n", modp(100, 101)); // prints: 1
    return 0;
}