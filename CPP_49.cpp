#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (; n > 0; n >>= 1) {
        if ((n & 1) != 0)
            res = (long long)res * p % p;
        p = (long long)p * p % p;
    }
    return res;
}

printf("Enter value of n: ");
scanf("%d", &n);
printf("Enter value of p: ");
scanf("%d", &p);
printf("2^%d mod %d = %d\n", n, p, modp(n, p));