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
	if(a==0 || b==0 || c==0)
		return false;
	if(a==b && b==c)
		return false;
	if(a==b || b==c || a==c)
		return true;
	if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		return true;
	return false;
}
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(right_angle_triangle(a,b,c))
		printf("true");
	else
		printf("false");
	return 0;
}
