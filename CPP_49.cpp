#include <iostream>
#include <cstdint>

long long int modp(long long int n, long long int p) {
    if (p == 1) return 0;
    long long int result = 1;
    n = n % p;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    return result;
}