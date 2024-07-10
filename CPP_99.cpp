#include <string>
#include <cmath>

int closest_integer(string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (abs(num - integerPart) >= 0.5) {
        return num > 0 ? (int)ceil(num) : (int)floor(num);
    } else {
        return integerPart;
    }
}