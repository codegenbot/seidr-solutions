```cpp
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == int(y));
}

int main() {
    int x, n;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Is it simple power? " << std::boolalpha << is_simple_power(x, 2) << std::endl;
    return 0;
}