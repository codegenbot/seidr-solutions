#include<stdio.h>
#include<math.h>
using namespace std;

float truncate_number(float number){
    int integerPart = static_cast<int>(number);
    return number - integerPart;
}