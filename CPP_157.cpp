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
    char a_str[3], b_str[3], c_str[4];
    cin >> a_str >> b_str >> c_str;
    float a = atof(a_str);
    float b = atof(b_str);
    float c = atof(c_str);
    if (right_angle_triangle(a, b, c))
        cout << "The triangle is right-angled." << endl;
    else
        cout << "The triangle is not right-angled." << endl;
}