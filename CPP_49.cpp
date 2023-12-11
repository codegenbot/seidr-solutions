```
#include <iostream>

int modp(int a, int b) {
    return a % b;
}

int main() {
    std::cout << "modp(3, 5): " << modp(3, 5) << '\n';
    std::cout << "modp(1101, 101): " << modp(1101, 101) << '\n';
    std::cout << "modp(0, 101): " << modp(0, 101) << '\n';
    std::cout << "modp(3, 11): " << modp(3, 11) << '\n';
    std::cout << "modp(100, 101): " << modp(100, 101) << '\n';
    return 0;
}
```