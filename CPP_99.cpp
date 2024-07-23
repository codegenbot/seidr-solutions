#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int integer = (num >= 0) ? static_cast<int>(ceil(num)) : static_cast<int>(floor(num));
    return integer;
}