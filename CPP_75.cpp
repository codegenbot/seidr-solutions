#include <cassert>

bool is_multiply_prime(int a) {
    for (int i = 2; i * i <= a; i++) {
        while (a % i == 0) {
            if (!is_prime(i)) return false;
            a /= i;
        }
    }
    return a == 1;
}

int main() {
    assert(is_multiply_prime(11 * 13 * 7) == true);
    return 0;
}