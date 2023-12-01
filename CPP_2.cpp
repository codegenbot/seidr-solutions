#include <cmath>

float truncate_number(float number){
    int integerPart = static_cast<int>(number);
    float decimalPart = number - integerPart;
    return decimalPart;
}