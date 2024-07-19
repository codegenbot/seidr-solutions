#include <cstdint>

uint64_t modp(uint64_t n, uint64_t p);

int main() {
    assert(modp(31, 5) == 3);
}

uint64_t modp(uint64_t n, uint64_t p) {
    if (p == 1) return 0;
    uint64_t result = 1;
    n %= p;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    return result;
}