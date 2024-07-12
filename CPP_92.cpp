```cpp
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
    assert(any_int(3.01, 4, 7) == false);
    
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    if (any_int(a, b, c)) 
        cout << "At least one of the input numbers is an integer.";
    else
        cout << "None of the input numbers are integers.";
    
    return 0;
}