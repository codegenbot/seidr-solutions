#include <cassert>
#include <cmath>
#include <string>

int closest_integer(const char* value)
{
    double num = std::stod(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return (num - lower < upper - num) ? lower : upper;
}