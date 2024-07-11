#include <iostream>
#include <string>

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
    string inputA = to_string(a);
    string inputB = to_string(b);
    string inputC = to_string(c);

    cin >> inputA >> inputB >> inputC;

    if (right_angle_triangle(stof(inputA), stof(inputB), stof(inputC)))
        cout << "The triangle is right-angled." << endl;
    else
        cout << "The triangle is not right-angled." << endl;
}