#include <stdio.h>
using namespace std;

int largest_prime_factor(int n) {
    int largest = -1;

    // Divide n by 2 until it becomes odd
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    // If n is still greater than 2, then it must be prime
    if (n > 2) {
        largest = n;
    }

    return largest;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", largest_prime_factor(n));
    return 0;
}