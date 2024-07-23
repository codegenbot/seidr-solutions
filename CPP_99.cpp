```cpp
#include <string>
#include <iostream>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int integerPart = (int)num;
    if (std::abs(num - integerPart) >= 0.5)
        return (num > 0) ? integerPart + 1 : integerPart - 1;
    else
        return integerPart;
}

int main() {
    std::string value;
    std::cout << "Enter a number: ";
    std::cin >> value;
    std::cout << "Closest integer is: " << closest_integer(value) << std::endl;
    return 0;
}