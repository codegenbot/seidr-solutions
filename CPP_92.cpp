#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = a, bi = b, ci = c;
    if (ai == bi + ci || bi == ai + ci || ci == ai + bi)
        return true;
    else
        return false;
}

int main() {
    float x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    
    if (any_int(x, y, z))
        cout << "The equation is an integer equation.\n";
    else
        cout << "The equation is not an integer equation.\n";
    
    return 0;
}