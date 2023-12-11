```cpp
#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
    std::cout << "is_simple_power(1, 4): " << is_simple_power("1", "4") << std::endl;
    std::cout << "is_simple_power(2, 2): " << is_simple_power("2", "2") << std::endl;
    std::cout << "is_simple_power(8, 2): " << is_simple_power("8", "2") << std::endl;
    std::cout << "is_simple_power(3, 2): " << is_simple_power("3", "2") << std::endl;
    std::cout << "is_simple_power(3, 1): " << is_simple_power("3", "1") << std::endl;
    std::cout << "is_simple_power(5, 3): " << is_simple_power("5", "3") << std::endl;
    return 0;
}

int is_simple_power(std::string x, std::string n) {
    int x_num = std::stoi(x);
    int n_num = std::stoi(n);
    return (x_num == pow(n_num, round(log(x_num) / log(n_num))));
}
```