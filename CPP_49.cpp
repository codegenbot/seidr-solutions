#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    while (n > 0) {
        if (n % 2 == 1)
            res = (long long)res * p % p;
        n /= 2;
        p = (long long)p * p % p;
    }
    return (int)res;
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d\n", modp(n, p));
    return 0;
}