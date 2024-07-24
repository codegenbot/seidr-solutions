#include <cassert>

bool is_multiply_prime(int n);

bool is_multiply_prime(int n) {
    // Add your implementation here
    return true;
}

int test() {
    assert(is_multiply_prime(11 * 13 * 7) == true);
    return 0;
}

int main() {
    return test();
}