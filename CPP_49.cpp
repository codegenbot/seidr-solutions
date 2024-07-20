#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res = (long long)res * i % p;
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