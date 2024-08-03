#include<stdio.h>
#include<math.h>
using namespace std;

float truncate_number(float number){
    int integerPart = (int)number;
    return number - float(integerPart);
}