#include <cmath>

int closest_integer(const std::string& value) {
    double num = stod(value);
    int closestInt = round(num);
    if (std::abs(num - closestInt) == 0.5) {
        closestInt = num > closestInt ? ceil(num) : floor(num);
    }
    return closestInt;
}