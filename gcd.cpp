#include <cmath>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b == 0) return a;
    return gcd(b, a % b);
}