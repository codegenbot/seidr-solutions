#include <iostream>
#include <cassert>
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

    if (!any_int(std::stof(a), std::stof(b), std::stof(c)))
        cout << "None of the input numbers are integers.\n";
    else
        cout << "At least one of the input numbers is an integer.\n";

    return 0;
}