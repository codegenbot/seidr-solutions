```cpp
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int integerPart = (int)num;
    if (std::abs(num - integerPart) >= 0.5) {
        return (num > 0) ? std::ceil(num) : std::floor(num);
    } else {
        return integerPart;
    }
}