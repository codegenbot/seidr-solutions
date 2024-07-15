#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int closestInt = std::round(num);
    if (num - closestInt == 0.5) {
        closestInt = std::ceil(num);
    } else if (num - closestInt == -0.5) {
        closestInt = std::floor(num);
    }
    return closestInt;
}