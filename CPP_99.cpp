#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int lower = static_cast<int>(floor(num));
    int upper = static_cast<int>(ceil(num));
    return (num - lower < upper - num) ? lower : upper;
}