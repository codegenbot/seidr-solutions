```cpp
#include <stdio.h>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = (long long)result * i % p;
    }
    return result;
}

int main() {
    int n, p;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of p: ");
    scanf("%d", &p);
    printf("2^%d mod %d = %d\n", n, p, modp(n, p));
    return 0;
}