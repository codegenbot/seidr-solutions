#include <cassert>

bool is_multiply_prime(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            int j = i;
            while (j * j <= a) {
                if (a % j == 0) return false;
                j++;
            }
            return true;
        }
    }
    return false;
}

int main() {
    assert(is_multiply_prime(11 * 13 * 7) == true);
    return 0;
}