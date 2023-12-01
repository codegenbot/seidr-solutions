#include <iostream>
#include <cmath>
using namespace std;

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100;
    } else {
        return -1;
    }
}

int main() {
    float a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;
    float area = triangle_area(a, b, c);
    if (area != -1) {
        cout << "Area of the triangle is: " << area << endl;
    } else {
        cout << "Invalid triangle" << endl;
    }
    return 0;
}