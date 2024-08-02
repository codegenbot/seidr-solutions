#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int rounded = static_cast<int>(round(num));
    if (std::abs(num - rounded) == 0.5) {
        return static_cast<int>((num > 0) ? ceil(num) : floor(num));
    }
    return rounded;
}