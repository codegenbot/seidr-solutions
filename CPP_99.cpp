#include <string>

int closest_integer(std::string value) {
    double num = std::stod(value);
    if (num >= 0) {
        return std::floor(num + 0.5);
    } else {
        return std::ceil(num - 0.5);
    }
}