```cpp
#include <iostream>
using namespace std;

float triangle_area(float a, float b, float c);

int main() {
    float a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if(triangle_area(a, b, c) == -1.0f) {
        cout << "The given values do not form a valid triangle.";
    } else {
        float result = triangle_area(a, b, c);
        cout << "The area of the triangle is: ";
        cout << fixed << setprecision(2);
        cout << result;
    }

    return 0;
}

float triangle_area(float a, float b, float c) {
    // implement your logic here
}