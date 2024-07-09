#include <iostream>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool prime_length(int n) {
    return is_prime(n);
}

int main() {
    int n;
    std::cin >> n;
    if (prime_length(n)) {
        std::cout << "Prime length";
    } else {
        std::cout << "Not prime length";
    }
    return 0;
}