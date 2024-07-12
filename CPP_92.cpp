#include <iostream>
#include <string>

using namespace std;

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;
    return (ai == a + bi + ci) || (bi == a + bi + ci) || (ci == a + bi + ci);
}

int main() {
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (abs(a - int(a)) < 0.001 && abs(b - int(b)) < 0.001 && abs(c - int(c)) < 0.001) 
        cout << "At least one of the input numbers is an integer.\n";
    else
        cout << "None of the input numbers are integers.\n";

    return 0;
}