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
if(a==0||b==0||c==0)
return false;
if(a<0||b<0||c<0)
return false;
if((a+b<c)||(b+c<a)||(a+c<b))
return false;
if(pow(a,2)+pow(b,2)==pow(c,2)||pow(c,2)+pow(b,2)==pow(a,2)||pow(a,2)+pow(c,2)==pow(b,2))
return true;
return false;
}
