```
#include <iostream>
#include <cmath>

bool is_simple_power(std::string x, std::string n) {
    double x_d = stod(x);
    double n_d = stod(n);
    return (x_d == pow(n_d, round(log(x_d) / log(n_d))));
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