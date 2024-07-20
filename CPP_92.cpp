#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if ((ai == ai + bi + ci) || (bi == ai + bi + ci) || (ci == ai + bi + ci))
        return true;
    else
        return false;
}

int main() {
    float a, b, c;
    cout << "Enter three floating point numbers: ";
    cin >> a >> b >> c;

    if (any_int(a, b, c))
        cout << "The sum of one integer and two integers is true." << endl;
    else
        cout << "The sum of one integer and two integers is false." << endl;

    return 0;
}