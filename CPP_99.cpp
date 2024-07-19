#include <cmath>
#include <string>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int rounded = static_cast<int>(round(num));
    if (std::abs(num - rounded) == 0.5) {
        return (num > 0) ? static_cast<int>(ceil(num)) : static_cast<int>(floor(num));
    } else {
        return static_cast<int>(num);
    }
}