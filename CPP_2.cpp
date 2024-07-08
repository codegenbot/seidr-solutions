#include <cmath>

float truncate_number(float number) {
    int integer = (int)number;
    float result = number - (float)integer;
    if (result >= 0)
        return result;
    else
        return -abs(result);
}