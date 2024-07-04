#include <iostream>
using namespace std;

float triangle_area(float a, float h) {
    return 0.5 * a * h;
}

int main() {
    float a, h;
    cout << "Enter the length of the side: ";
    cin >> a;
    cout << "Enter the height: ";
    cin >> h;
    float area = triangle_area(a, h);
    cout << "The area of the triangle is: " << area << endl;
    return 0;
}