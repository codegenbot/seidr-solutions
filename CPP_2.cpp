#include <cmath>
#include <cassert>

float truncate_number(float number) {
    return number - std::floor(number);
}