#include <iostream>
#include <cassert>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int a) {
    if (a < 30) {
        return false;
    }
    for (int i = 2; i <= a / 3; ++i) {
        if (a % i == 0) {
            int b = a / i;
            for (int j = i + 1; j <= b / 2; ++j) {
                if (b % j == 0 && is_prime(i) && is_prime(j) && is_prime(b / j)) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    assert(is_multiply_prime(11 * 13 * 7) == true);

    return 0;
}