#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 1e-9 && abs(b - (a + c)) < 1e-9 && abs(c - (a + b)) < 1e-9) {
        return true;
    }
    return false;
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if(any_int(a, b, c))
        cout << "The numbers are integers." << endl;
    else
        cout << "The numbers are not integers." << endl;
    return 0;
}