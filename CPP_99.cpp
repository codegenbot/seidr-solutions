#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int rounded = static_cast<int>(round(num));
    if (num - rounded == 0.5) {
        return (num > 0) ? ceil(num) : floor(num);
    } else {
        return round(num);
    }
}