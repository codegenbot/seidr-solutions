#include<iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = abs((int)(a + 0.5));
    int bi = abs((int)(b + 0.5));
    int ci = abs((int)(c + 0.5));

    if ((ai + bi > ci) && (ai + ci > bi) && (bi + ci > ai))
        return true;
    else
        return false;
}

int main() {
    float a, b, c;

    cout << "Enter side lengths of triangle: ";
    cin >> a >> b >> c;

    if (any_int(a, b, c)) {
        cout << "It is possible to form an integer." << endl;
    } else {
        cout << "It is not possible to form an integer." << endl;
    }

    return 0;
}