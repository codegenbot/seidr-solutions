#include <string>

int closest_integer(std::string value);

int closest_integer(std::string value){
    double num = std::stod(value);
    int rounded = std::round(num);
    if (num - rounded == 0.5) {
        if (num > 0) {
            return std::ceil(num);
        } else {
            return std::floor(num);
        }
    } else {
        return rounded;
    }
}