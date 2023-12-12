#include <iostream>
#include <cmath>

int isCuber(int a) {
    double cbrt = std::cbrt(static_cast<double>(a));
    return (std::abs(cbrt - static_cast<int>(cbrt)) < 1e-6);
}

int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    if (a < 0) {
        std::cout << "The number is not a cube." << std::endl;
    } else {
        if (isCuber(a)) {
            std::cout << "The number is a cube." << std::endl;
        } else {
            std::cout << "The number is not a cube." << std::endl;
        }
    }
    return 0;
}