#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (; n > 0; n >>= 1) {
        if (n & 1)
            res = (res * p) % p;
        p = (p * p) % p;
    }
    return res;
}

int main() {
    int n, p;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of p: ");
    scanf("%d", &p);
    printf("2^n mod p = %d\n", modp(n,p));
    return 0;
}