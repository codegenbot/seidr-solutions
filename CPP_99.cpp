#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int num_floor = floor(num);
    int num_ceil = ceil(num);
    return (num - num_floor < num_ceil - num) ? num_floor : num_ceil;
}