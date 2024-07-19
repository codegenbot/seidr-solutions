#include <cmath>
int closest_integer(std::string value) {
    float num = std::stof(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return std::abs(num - lower) < std::abs(num - upper) ? lower : upper;
}