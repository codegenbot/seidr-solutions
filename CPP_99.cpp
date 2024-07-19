#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int rounded_num = (int)round(num);
    if (abs(num - rounded_num) == 0.5) {
        return (num > 0) ? ceil(num) : floor(num);
    } else {
        return round(num);
    }
}