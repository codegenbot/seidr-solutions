```
#include <iostream>
#include <cmath>

int largest_prime_factor(int n) {
    int maxFactor = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0 && isPrime(i)) {
            maxFactor = i;
            break;
        }
    }
    return maxFactor;
}

bool isPrime(int n) {
    if (n <= 1 || n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
```