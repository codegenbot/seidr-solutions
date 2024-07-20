```cpp
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

    if(any_int(a, b, c))
        cout << "The sum of integers is equal to the integer value." << endl;
    else
        cout << "The sum of integers is not equal to the integer value." << endl;

    return 0;
}