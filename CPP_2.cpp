#include <cmath>

float truncate_number(float number){
    int integer_part = (int)number;
    float fractional_part = number - float(integer_part);
    
    if(fractional_part > 0.5 || (integer_part % 2 == 1 && fractional_part >= 0.5)) {
        return abs(number - ((float)(integer_part + 1)));
    } else {
        return abs(number - ((float)(integer_part)));
    }
}