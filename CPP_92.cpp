#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = a, bi = b, ci = c;
    if (!(ai == bi + ci) && !(bi == ai + ci) && !(ci == ai + bi)) {
        cout << "No integer can be expressed as the sum of the other two." << endl;
        return false;
    } else {
        cout << "At least one integer can be expressed as the sum of the other two." << endl;
        return true;
    }
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    any_int(a, b, c);
    return 0;
}