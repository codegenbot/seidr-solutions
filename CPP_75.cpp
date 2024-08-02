#include <iostream>
#include <cassert>

bool is_multiply_prime(int a) {
    if (a < 30) return false;
    for (int i = 2; i <= a / 3; ++i) {
        for (int j = i; j <= a / 2; ++j) {
            int k = a / (i * j);
            if (i * j * k == a && i != j && j != k && i != k) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    assert(is_multiply_prime(11 * 13 * 7) == true);
    // Add more test cases as needed
    return 0;
}