#include <iostream>

bool is_prime(long long n) {
    bool is_divisible = false;
    for (int i = 2; i * i <= n && !is_divisible; ++i) {
        if (n % i == 0) {
            is_divisible = true;
        }
    }
    return !is_divisible;
}

int main() {
    std::cout << is_prime(13441 * 19) << std::endl;
    return 0;
}