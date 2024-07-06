```cpp
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n);

bool is_simple_power(int x, int n) {
    return pow(n, log(x) / log(n)) == x;
}

int main() {
    int x, n;
    std::cout << "Enter value of x: ";
    std::cin >> x;
    std::cout << "Enter value of n: ";
    std::cin >> n;
    if (is_simple_power(x, n))
        std::cout << x << " is a simple power of " << n << "." << std::endl;
    else
        std::cout << x << " is not a simple power of " << n << "." << std::endl;
    return 0;
}