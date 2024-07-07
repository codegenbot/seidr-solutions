#include <cmath>

int gcd(int a, int b) {
    if (b == 0)
        return abs(a);
    else
        return gcd(b, abs(a % b));
}