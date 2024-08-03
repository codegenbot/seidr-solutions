#include <string>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    return static_cast<int>(num >= 0 ? std::floor(num + 0.5) : std::ceil(num - 0.5));
}