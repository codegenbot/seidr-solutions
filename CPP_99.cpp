#include <string>
#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int rounded = std::round(num);
    int floorVal = std::floor(num);
    int ceilVal = std::ceil(num);

    if (rounded - num < num - rounded) {
        return rounded;
    } else if (num - floorVal < ceilVal - num) {
        return floorVal;
    } else {
        return ceilVal;
    }
}

int main() {
    std::string value;
    std::cout << "Enter a value: ";
    std::cin >> value;
    std::cout << "Closest integer: " << closest_integer(value) << std::endl;
    return 0;
}