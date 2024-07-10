#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    return (num >= 0) ? ceil(num) : floor(num);
}