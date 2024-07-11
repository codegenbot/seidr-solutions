#include <algorithm>

int gcd(int a, int b) {
    while (b != 0)
        std::swap(a, b);
    return a;