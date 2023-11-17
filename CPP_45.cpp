/*
Given length of a side and high return area for a triangle.
>>> triangle_area(5, 3)
7.5
*/
#include<stdio.h>
#include<math.h>
using namespace std;
float triangle_area(float a,float h){
	float area;
	area = a*h/2;
	return area;
}
int main(){
	float side,high,area;
	printf("Enter side:");
	scanf("%f",&side);
	printf("Enter high:");
	scanf("%f",&high);
	area = triangle_area(side,high);
	printf("Area is %.1f",area);
	return 0;
}
