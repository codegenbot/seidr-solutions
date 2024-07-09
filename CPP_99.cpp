#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int integerPart = (int)num;
    return (abs(num - integerPart) >= 0.5) ? integerPart + (num > integerPart ? 1 : -1) : integerPart;
}