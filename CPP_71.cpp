#include<stdio.h>
#include<math.h>
using namespace std;

float triangle_area(float a,float b,float c){
    if((a+b)>c && (a+c)>b && (b+c)>a)
        return (sqrt(pow(a,2) + pow(b,2) - 2*a*b*cos(acos(sin(atan2(b-a, a)))*180/3.14159))*sin(acos(sin(atan2(b-a, a)))*180/3.14159));
    else
        return -1;
}