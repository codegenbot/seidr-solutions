#include<stdio.h>
#include<math.h>
using namespace std;
bool right_angle_triangle(float a,float b,float c){
    float x = max(a, max(b, c));
    float y, z;
    if (x == a) {
        y = b;
        z = c;
    } else if (x == b) {
        y = a;
        z = c;
    } else {
        y = a;
        z = b;
    }
    return fabs(x*x - (y*y + z*z)) < 1e-6;
}