#include <stdio.h>
#include <cmath>

using namespace std;

int modp(int n, int p) {
    long long res = 1;
    for (int i = 0; i < 32; ++i) {
        if ((n >> i) & 1)
            res = (res * p) % p;
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