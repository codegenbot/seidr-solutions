#include <iostream>
using namespace std;

float triangle_area(float a, float b, float c);

int main() {
    float side1, side2, side3;
    
    cout << "Enter the length of side 1: ";
    cin >> side1;
    
    cout << "Enter the length of side 2: ";
    cin >> side2;
    
    cout << "Enter the length of side 3: ";
    cin >> side3;
    
    if (triangle_area(side1, side2, side3) == -1.0f) {
        cout << "The sides do not form a triangle." << endl;
    } else {
        cout << "The area of the triangle is: " << triangle_area(side1, side2, side3) << endl;
    }
    
    return 0;
}

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}