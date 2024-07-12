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
    cout << "Enter three numbers: ";
    float a, b, c;
    cin >> a >> b >> c;
    if (any_int(a, b, c)) {
        cout << "At least one integer.\n";
    } else {
        cout << "No integers.\n";
    }
    return 0;
}