```
#include <iostream>
#include <cmath>

int modp(int n, int p) {
    return pow(2, n) % p;
}

int main() {
    std::cout << "modp(3, 5): " << modp(3, 5) << std::endl;
    std::cout << "modp(1101, 101): " << modp(1101, 101) << std::endl;
    std::cout << "modp(0, 101): " << modp(0, 101) << std::endl;
    std::cout << "modp(3, 11): " << modp(3, 11) << std::endl;
    std::cout << "modp(100, 101): " << modp(100, 101) << std::endl;
    return 0;
}
```