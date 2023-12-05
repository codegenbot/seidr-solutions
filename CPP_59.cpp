```
#include <cmath>

int largest_prime_factor(int n) {
    int factor = 2;
    while (n % factor != 0 && factor <= sqrt(n)) {
        if (n % factor == 0) {
            return factor;
        }
        factor++;
    }
    return -1;
}
```