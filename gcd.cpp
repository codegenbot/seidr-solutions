#include <iostream>
#include <cmath>

int abs(int x) {
    return x < 0 ? -x : x;
}

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}