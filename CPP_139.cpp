#include <cstdio>  // for printf and scanf

long long factorial(int x) {
    long long result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= factorial(i);
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", special_factorial(n));
    return 0;
}