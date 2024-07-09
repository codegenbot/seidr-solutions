```cpp
#include <iostream>
using namespace std;

float triangle_area(float a, float b, float c);

int main() {
    float a_val, b_val, c_val;
    cout << "Enter three sides of the triangle: ";
    cin >> a_val >> b_val >> c_val;

    if(triangle_area(a_val, b_val, c_val) == -1.0f) {
        cout << "The given values do not form a valid triangle.";
    } else {
        float result = triangle_area(a_val, b_val, c_val);
        cout << "The area of the triangle is: ";
        cout << fixed << setprecision(2);
        cout << result;
    }

    return 0;
}

float triangle_area(float a, float b, float c) {
    if (a + b <= c || a + c <= b || b + c <= a)
        return -1.0f;

    float s = (a + b + c) / 2.0f;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}