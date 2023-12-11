#include <iostream>
#include <cmath>

int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    if (a < 0) {
        std::cout << "The number is not a cube." << std::endl;
    } else {
        double cbrt = std::cbrt(static_cast<double>(a));
        if (std::abs(cbrt - static_cast<int>(cbrt)) < 1e-6) {
            std::cout << "The number is a cube." << std::endl;
        } else {
            std::cout << "The number is not a cube." << std::endl;
        }
    }
    return 0;
}