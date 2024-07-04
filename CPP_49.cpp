#include <stdio.h>

int modp(int n, int p){
    if (n == 0) return 1;
    long long result = 1;
    long long base = 2;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % p;
        }
        base = (base * base) % p;
        n /= 2;
    }
    return result;
}

int main() {
    printf("%d\n", modp(3, 5));    // Output: 3
    printf("%d\n", modp(1101, 101)); // Output: 2
    printf("%d\n", modp(0, 101));   // Output: 1
    printf("%d\n", modp(3, 11));    // Output: 8
    printf("%d\n", modp(100, 101)); // Output: 1
    return 0;
}