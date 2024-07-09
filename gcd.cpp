#include <cmath>

int gcd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}