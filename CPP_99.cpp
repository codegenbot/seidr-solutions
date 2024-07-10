#include <string>

int closest_integer(std::string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (num - integerPart >= 0.5) {
        return integerPart + 1;
    } else {
        return integerPart;
    }
}