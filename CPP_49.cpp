#include<stdio.h>
using namespace std;

int modp(int n, int p) {
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
    printf("%d\n", modp(3, 5));   // 3
    printf("%d\n", modp(1101, 101)); // 2
    printf("%d\n", modp(0, 101));   // 1
    printf("%d\n", modp(3, 11));   // 8
    printf("%d\n", modp(100, 101)); // 1
    return 0;
}