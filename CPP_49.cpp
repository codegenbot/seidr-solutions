#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (; n; n >>= 1) {
        if (n & 1)
            res = (long long)res * p % p;
        p = (long long)p * p % p;
    }
    return res;
}

int main() {
    int n, p;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of p: ");
    scanf("%d", &p);
    printf("2^n modulo p = %d\n", modp(n, p));
    return 0;
}