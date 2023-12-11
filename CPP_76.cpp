```cpp
#include <iostream>
#include <cmath>

bool is_simple_power(const std::string& x, const std::string& n) {
    double x_d = std::stod(x);
    double n_d = std::stod(n);
    return (x == pow(n_d, round(log(x_d) / log(n_d))));
}

int main() {
    std::cout << "is_simple_power(1, 4): " << is_simple_power("1", "4") << std::endl;
    std::cout << "is_simple_power(2, 2): " << is_simple_power("2", "2") << std::endl;
    std::cout << "is_simple_power(8, 2): " << is_simple_power("8", "2") << std::endl;
    std::cout << "is_simple_power(3, 2): " << is_simple_power("3", "2") << std::endl;
    std::cout << "is_simple_power(3, 1): " << is_simple_power("3", "1") << std::endl;
    std::cout << "is_simple_power(5, 3): " << is_simple_power("5", "3") << std::endl;
    return 0;
}
```