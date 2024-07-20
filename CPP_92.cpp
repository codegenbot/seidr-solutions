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
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(any_int(a, b, c)) {
        cout << "At least one of the numbers is an integer." << endl;
    } else {
        cout << "None of the numbers are integers." << endl;
    }
    
    return 0;
}