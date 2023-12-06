
Sure, here's the corrected code:
```
#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    return (x == pow(n, static_cast<int>(log(x) / log(n))));
}

int main() {
    std::cout << "is_simple_power(1, 4): " << is_simple_power(1, 4) << std::endl;
    std::cout << "is_simple_power(2, 2): " << is_simple_power(2, 2) << std::endl;
    std::cout << "is_simple_power(8, 2): " << is_simple_power(8, 2) << std::endl;
    std::cout << "is_simple_power(3, 2): " << is_simple_power(3, 2) << std::endl;
    std::cout << "is_simple_power(3, 1): " << is_simple_power(3, 1) << std::endl;
    std::cout << "is_simple_power(5, 3): " << is_simple_power(5, 3) << std::endl;
    return 0;
}
```