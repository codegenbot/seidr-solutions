```cpp
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    std::cout << "Program execution completed successfully: ";
    if (is_simple_power(1, 12))
        std::cout << "true";
    else
        std::cout << "false";

    std::cout << std::endl;
    return 0;
}