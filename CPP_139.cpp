#include <stdio.h>
using namespace std;

long long special_factorial(int n) {
    if (n == 0)
        return 1;
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
        for (int j = i - 1; j >= 1; --j) {
            result *= j;
        }
    }
    return result;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Special factorial of %d is %lld\n", n, special_factorial(n));
    return 0;
}