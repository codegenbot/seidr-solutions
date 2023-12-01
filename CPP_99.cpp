#include <string>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);

    double diff_floor = std::abs(num - floor_num);
    double diff_ceil = std::abs(num - ceil_num);

    if (diff_floor == diff_ceil) {
        if (num > 0) {
            return ceil_num;
        } else {
            return floor_num;
        }
    }

    if (diff_floor < diff_ceil) {
        return floor_num;
    } else {
        return ceil_num;
    }
}