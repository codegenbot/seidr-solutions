```c++
#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = a, bi = b, ci = c;
    if(ai == bi + ci || bi == ai + ci || ci == ai + bi)
        return true;
    else
        return false;
}

int main() {
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(any_int(a, b, c))
        cout << "At least one of the integers is equal to the sum of the other two." << endl;
    else
        cout << "No integer is equal to the sum of the other two." << endl;
    return 0;
}