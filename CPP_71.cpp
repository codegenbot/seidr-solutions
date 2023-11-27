#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    // check if the given sides form a valid triangle
    if (a + b > c && b + c > a && a + c > b) {
        // calculate the semi-perimeter of the triangle
        float s = (a + b + c) / 2;
        
        // calculate the area of the triangle using Heron's formula
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        
        // round the area to 2 decimal points using std::round function
        area = std::round(area * 100) / 100;
        
        return area;
    } else {
        return -1;
    }
}