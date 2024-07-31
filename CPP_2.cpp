#include <iostream>

int main() {
    double number;
    std::cin >> number;
    double fractionalPart = number - static_cast<int>(number);
    std::cout << fractionalPart << std::endl;
    return 0;
}