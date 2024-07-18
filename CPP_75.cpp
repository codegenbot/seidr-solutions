#include <iostream>
#include <cmath>

bool is_prime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool is_multiply_prime(int num) {
    int num_factors = 0;
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && is_prime(i)) {
            num_factors++;
        }
    }
    return is_prime(num_factors);
}

int main() {
    int num;
    std::cin >> num;
    std::cout << (is_multiply_prime(num) ? "true" : "false") << std::endl;
    return 0;
}