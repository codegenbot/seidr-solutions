#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return ((pow(2, n/2)) % p * (pow(2, n/2)) % p) % p;
    else
        return ((2 % p) * pow(2, n-1) % p + 1) % p;
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