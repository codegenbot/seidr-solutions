```cpp
#include <iostream>

int gcd(int a, int b) {
    while (b != 0)
        a %= b;
    return a;
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << std::endl;
    return 0;
}