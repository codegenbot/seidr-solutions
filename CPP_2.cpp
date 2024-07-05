#include<stdio.h>
#include<math.h>

float truncate_number(float number) {
    int integer_part = (int)number;
    return (float)integer_part;
}