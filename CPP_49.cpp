```
#include <cmath>
#include <iostream>

int modp(int n, int p) {
    return pow(2, n) % p;
}

int main() {
    // Test cases
    std::cout << "modp(3, 5): " << modp(3, 5) << std::endl;
    std::cout << "modp(1101, 101): " << modp(1101, 101) << std::endl;
    std::cout << "modp(0, 101): " << modp(0, 101) << std::endl;
    std::cout << "modp(3, 11): " << modp(3, 11) << std::endl;
    std::cout << "modp(100, 101): " << modp(100, 101) << std::endl;
    return 0;
}
```
Note: The `pow` function is a part of the `<cmath>` header in C++, and it returns the value of x raised to the power of y. In this case, we use it to calculate 2^n.