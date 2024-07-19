#include <iostream>
using namespace std;

float triangle_area(float a, float b, float c);

int main() {
    float side1, side2, side3;
    cout << "Enter the sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    float result = triangle_area(side1, side2, side3);
    
    if (result == -1.0f) {
        cout << "Not a valid triangle." << endl;
    } else {
        cout << "The area of the triangle is: " << result << endl;
    }
}

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}