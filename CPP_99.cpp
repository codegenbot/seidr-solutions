#include <string>
#include <iostream>

int closest_integer(std::string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (abs(num - integerPart) < 0.5) {
        return integerPart + (num > 0 ? 1 : -1);
    } else {
        return integerPart;
    }
}