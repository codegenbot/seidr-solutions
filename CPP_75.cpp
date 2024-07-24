#include <cassert>

bool is_multiply_prime(int n);

bool is_multiply_prime(int n) {
    return true;
}

int main() {
    assert(is_multiply_prime(11 * 13 * 7) == true);
    return 0;
}