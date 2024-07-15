#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int result = (num > 0) ? std::floor(num + 0.5) : std::ceil(num - 0.5);
    return result;
}