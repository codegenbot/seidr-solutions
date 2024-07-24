```
#include<iostream>
using namespace std;

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return round((sqrt(s*(s-a)*(s-b)*(s-c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    float a, b, c;
    cout << "Enter side 1: ";
    cin >> a;
    cout << "Enter side 2: ";
    cin >> b;
    cout << "Enter side 3: ";
    cin >> c;
    
    float area = triangle_area(a, b, c);
    
    if(area == -1.0f)
        cout << "Not a valid triangle." << endl;
    else
        cout << "The area of the triangle is " << area << "." << endl;

    return 0;
}