#include <cmath>
#include <string>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int closest_integer = std::round(num);
    if (std::abs(num - closest_integer) == 0.5) {
        closest_integer = (num > 0) ? std::ceil(num) : std::floor(num);
    }
    return closest_integer;
}