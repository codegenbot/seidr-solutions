#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long res = 1;
    for (; n > 0; n >>= 1) {
        if (n & 1)
            res = (long)res * p % p;
        p = (long)p * p % p;
    }
    return res;
}

int main() {
    int n, p;
    printf("Enter number of bits in the binary representation: ");
    scanf("%d", &n);
    printf("Enter a prime number: ");
    scanf("%d", &p);
    printf("2^%d mod %d = %d\n", n, p, modp(n, p));
    return 0;
}