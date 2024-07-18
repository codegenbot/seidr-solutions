#include <string>
#include <cmath>

int closest_integer(std::string value);

int closest_integer(std::string value) {
    float num = std::stof(value);
    int res = std::round(num);
    return res;
}