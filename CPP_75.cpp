#include <cassert>

bool is_multiply_prime(int n) {
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

int main() {
    assert(is_multiply_prime(11 * 13 * 7) == true);
    return 0;
}