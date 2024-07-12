#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;
    return (ai == ai + bi + ci) || (bi == ai + bi + ci) || (ci == ai + bi + ci);
}

int main() {
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (abs(a - (int)a) < 0.0001 && abs(b - (int)b) < 0.0001 && abs(c - (int)c) < 0.0001)
        cout << "At least one of the input numbers is an integer.\n";
    else
        cout << "None of the input numbers are integers.\n";

    return 0;
}