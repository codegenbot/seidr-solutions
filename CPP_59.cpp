```
#include <iostream>
#include <cmath>

int largest_prime_factor(int n) {
    int max_factor = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0 && is_prime(i)) {
            max_factor = i;
            break;
        }
    }
    return max_factor;
}

bool is_prime(int n) {
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