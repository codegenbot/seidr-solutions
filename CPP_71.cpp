#include <stdio.h>
#include <math.h>
using namespace std;

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        return round((a * b * sin(c)) / 2);
    } else {
        return -1;
    }
}