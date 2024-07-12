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

    string str;
    str += to_string(a);
    str += " + ";
    str += to_string(b);
    str += " + ";
    str += to_string(c);

    cout << str << endl;

    if (any_int(a, b, c)) 
        cout << "At least one of the input numbers is an integer.\n";
    else
        cout << "None of the input numbers are integers.\n";

    return 0;
}