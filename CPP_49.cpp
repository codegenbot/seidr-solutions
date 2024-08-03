#include <iostream>

// Task: Calculate the modulo of n raised to the power of n under mod p
long long modp(long long n, long long p) {
    if (p == 1)
        return 0;
    long long result = 1;
    n = n % p;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    return result;
}

int main() {
    long long n, p;
    std::cin >> n >> p;
    std::cout << modp(n, p);
    return 0;
}