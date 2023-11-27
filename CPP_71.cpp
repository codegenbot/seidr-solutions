#include <iostream>
#include <cmath>
using namespace std;

float triangle_area(float a, float b, float c) {
    float area = -1; // Initialize area to -1
    
    // Check if the three sides form a valid triangle
    if (a + b > c && b + c > a && a + c > b) {
        // Calculate the semi-perimeter
        float s = (a + b + c) / 2;
        
        // Calculate the area using Heron's formula
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    
    return area;
}

int main() {
    float a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    float area = triangle_area(a, b, c);
    
    if (area == -1) {
        cout << "The given sides do not form a valid triangle.";
    } else {
        cout << "The area of the triangle is: " << fixed << setprecision(2) << area;
    }
    
    return 0;
}