#include <iostream>
#include <cassert>

bool is_multiply_prime(int a) {
    if (a < 30) return false;
    for (int i = 2; i <= a / 2; ++i) {
        if (a % i == 0) {
            int j = a / i;
            for (int k = 2; k <= j / 2; ++k) {
                if (j % k == 0) {
                    int l = j / k;
                    if (l != k && l > 1) {
                        return true;
                    }
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