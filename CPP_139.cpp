#include <stdio.h>
#include <iostream>

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= 1LL * i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d");
    printf("The special factorial of %d is: %lld\n", n, special_factorial(n));
    return 0;
}