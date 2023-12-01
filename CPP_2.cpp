#include <cmath>

float truncate_number(float number){
    int integerPart = (int) number;
    float decimalPart = std::abs(number - integerPart);
    return decimalPart;
}