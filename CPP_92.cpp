#include <iostream>
#include <cassert>
using namespace std;

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    double tolerance = 0.0001;
    cout << (isValidTriangle(3.01, 4, 7) ? "true" : "false") << endl;
    assert(!isValidTriangle(3.01, 4, 7));
    assert(!isValidTriangle(3.01 - tolerance, 4, 7));
    return 0;
}