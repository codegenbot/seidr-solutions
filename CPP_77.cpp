```cpp
#include <iostream>
#include <cmath>

int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    if (std::cbrt(a) == a) {
        std::cout << "The number is a cube." << std::endl;
    } else {
        std::cout << "The number is not a cube." << std::endl;
    }
    return 0;
}
```