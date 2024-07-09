#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int closestInt = std::round(num);
    if (std::abs(num - closestInt) == 0.5) {
        closestInt = (num - closestInt > 0) ? std::ceil(num) : std::floor(num);
    }
    return closestInt;
}