```cpp
#include <stdio.h>
using namespace std;

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("The special factorial of %d is: %lli\n", n, special_factorial(n));
    return 0;
}