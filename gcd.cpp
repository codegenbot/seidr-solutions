```cpp
#include <cstdlib>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (b == 0)
        std::cout << a;
    else
        std::cout << gcd(b, abs(a % b));
    return 0;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, abs(a % b));
}