#include<stdio.h>
#include<math.h>
using namespace std;

float truncate_number(float number){
    int integer_part = (int)number;
    return number - integer_part;
}