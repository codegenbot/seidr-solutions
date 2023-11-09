/*
Given the lengths of the three sides of a triangle. Return true if the three
sides form a right-angled triangle, false otherwise.
A right-angled triangle is a triangle in which one angle is right angle or 
90 degree.
Example:
right_angle_triangle(3, 4, 5) == true
right_angle_triangle(1, 2, 3) == false
*/
#include<stdio.h>
#include<math.h>
using namespace std;
bool right_angle_triangle(float a,float b,float c){
    if(a>b && a>c){
        if((a*a)==(b*b)+(c*c))
        return true;
    }
    else if(b>a && b>c){
        if((b*b)==(a*a)+(c*c))
        return true;
    }
    else if(c>a && c>b){
        if((c*c)==(a*a)+(b*b))
        return true;
    }
    return false;
}
