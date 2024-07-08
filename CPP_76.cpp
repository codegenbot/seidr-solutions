```cpp
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    int x, n;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter another number: ";
    std::cin >> n;
    if (is_simple_power(x, n))
        std::cout << x << " is a simple power of " << n << ".\n";
    else
        std::cout << x << " is not a simple power of " << n << ".\n";
    return 0;
}