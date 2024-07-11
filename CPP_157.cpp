```cpp
#include <iostream>
#include <cassert>

using namespace std;

bool right_angle_triangle(float a, float b, float c) {
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        return true;
    else
        return false;
}

int main() { 
    assert(right_angle_triangle(2, 2, 10) == false);
    cout << "Input the lengths of three sides (a, b, c): ";
    float a, b, c;
    cin >> a >> b >> c;
    if (right_angle_triangle(a, b, c))
        cout << "The triangle is right-angled." << endl;
    else
        cout << "The triangle is not right-angled." << endl;