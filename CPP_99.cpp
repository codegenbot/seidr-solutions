#include <cmath>

int closest_integer(const std::string& value) {
    double num = stod(value);
    int closestInt = static_cast<int>(round(num));
    if (std::abs(num - closestInt) == 0.5) {
        closestInt = (num > 0) ? ceil(num) : floor(num);
    }
    return closestInt;
}