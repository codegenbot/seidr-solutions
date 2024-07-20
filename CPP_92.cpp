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
    // Test case 1: 
    cout << any_int(3.01, 4, 7) << endl; 

    // Test case 2:
    cout << any_int(0.5, 0.5, 0.5) << endl;

    return 0;
}