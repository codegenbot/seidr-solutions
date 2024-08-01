#include <iostream>
#include <cassert>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0 && is_prime(i) && is_prime(num / i)) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(is_multiply_prime(11 * 13 * 7) == true);

    return 0;
}