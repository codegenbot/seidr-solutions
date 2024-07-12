#include <iostream>
#include <string>

using namespace std;

bool is_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;
    return (ai == ai + bi + ci) || (bi == ai + bi + ci) || (ci == ai + bi + ci);
}

bool any_int(float a, float b) {
    int ai = (int)a;
    return (ai == ai + (int)b);
}

int main_function() {
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (is_int(a, b, c)) 
        cout << "At least one of the input numbers is an integer.\n";
    else
        cout << "None of the input numbers are integers.\n";

    assert(any_int(3.01,4,7)==false);

    return 0;
}