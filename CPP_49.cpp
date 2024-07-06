#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (p == 1)
        return n % p;
    else if (n < p)
        return n;
    else {
        int result = modp(n / p, p);
        if ((long long)n % p != 0 || (long long)p > 1e9)
            result = (result * 2) % p;
        return result;
    }
}

int main() {
    printf("%d\n", modp(3, 5));
    printf("%d\n", modp(1101, 101));
    printf("%d\n", modp(0, 101));
    printf("%d\n", modp(3, 11));
    printf("%d\n", modp(100, 101));
    return 0;
}