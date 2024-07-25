#include <cmath>

float truncate_number(float number){
    int integerPart = (int)number;
    return abs(number - integerPart);
}