#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return (num - lower) < (upper - num) ? lower : upper;
}