#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int intNum = (int)std::round(num);
    if (num - intNum < 0) {
        return (int)std::ceil(num);
    } else {
        return (int)std::floor(num);
    }
}