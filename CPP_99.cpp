#include <cmath>
#include <string>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    return static_cast<int>(std::round(num));
}