#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int closestInt = static_cast<int>(std::round(num));
    if (std::abs(num - closestInt) == 0.5) {
        closestInt = (num > 0) ? std::ceil(num) : std::floor(num);
    }
    return closestInt;
}