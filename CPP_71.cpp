```cpp
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c);

int main_cpp() {
    float a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if(triangle_area(a, b, c) == -1.0f) {
        cout << "The given values do not form a valid triangle.";
    } else {
        float result = triangle_area(a, b, c);
        cout << "The area of the triangle is: ";
        cout << std::fixed << setprecision(2) << result;
    }

    return 0;
}

float triangle_area(float a, float b, float c) {
    if (a + b <= c || a + c <= b || b + c <= a)
        return -1.0f;

    float s = (a + b + c) / 2.0f;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}