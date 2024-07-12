#include <cmath>
int closest_integer(std::string value) {
    double num = std::stod(value);
    int num_floor = std::floor(num);
    int num_ceil = std::ceil(num);
    return (num - num_floor < num_ceil - num) ? num_floor : num_ceil;
}