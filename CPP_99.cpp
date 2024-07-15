#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int closest_integer = round(num);
    if (num - closest_integer == 0.5 || num - closest_integer == -0.5) {
        closest_integer = (num > 0) ? ceil(num) : floor(num);
    }
    return closest_integer;
}