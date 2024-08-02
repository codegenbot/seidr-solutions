#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = a, bi = b, ci = c;
    if (!(ai == bi + ci || bi == ai + ci || ci == ai + bi)) {
        cout << "Error: No integer can be expressed as the sum of two other integers." << endl;
        return false;
    }
    return true;
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if (any_int(a, b, c))
        cout << "The numbers can be represented as the sum of two integers." << endl;
    else
        cout << "The numbers cannot be represented as the sum of two integers." << endl;
    return 0;
}