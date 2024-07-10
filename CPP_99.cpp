#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    return (num >= 0) ? static_cast<int>(std::ceil(num)) : static_cast<int>(std::floor(num));
}