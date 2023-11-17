/*
Given length of a side and high return area for a triangle.
>>> triangle_area(5, 3)
7.5
*/
#include<stdio.h>
#include<math.h>
using namespace std;
float triangle_area(float a,float h){
return (a*h)/2;
}
int main()
{
float a,h;
scanf("%f",&a);
scanf("%f",&h);
printf("%f",triangle_area(a,h));
return 0;
}
