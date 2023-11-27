#include <cmath>

float truncate_number(float number) {
    float decimal = number - std::floor(number);
    return decimal;
}