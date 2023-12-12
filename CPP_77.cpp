```cpp
#include <iostream>
#include <cmath>

bool isCube(double num) {
    double cbrt = std::cbrt(num);
    return (std::abs(cbrt - static_cast<int>(cbrt)) < 1e-6);
}

int main() {
    int a;
    std::cout << "Enter an integer: ";
    if (!(std::cin >> a)) {
        std::cerr << "Invalid input. Please enter a valid integer.\n";
        return 1;
    }
    if (a < 0) {
        std::cout << "The number is not a cube." << std::endl;
    } else {
        if (isCube(static_cast<double>(a))) {
            std::cout << "The number is a cube." << std::endl;
        } else {
            std::cout << "The number is not a cube." << std::endl;
        }
    }
    return 0;
}
```