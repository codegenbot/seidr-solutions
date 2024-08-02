```c++
#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = a, bi = b, ci = c;
    if (!(ai == bi + ci || bi == ai + ci || ci == ai + bi)) {
        cout << "Error: No integer found." << endl;
        return false;
    } else {
        return true;
    }
}

int main() {
    float a, b, c;
    cout << "Enter three floating point numbers: ";
    cin >> a >> b >> c;
    any_int(a, b, c);
    return 0;
}