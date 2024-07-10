#include <iostream>
#include <cassert>
using namespace std;

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << (isValidTriangle(a, b, c) ? "true" : "false") << endl;
    assert(isValidTriangle(3.01, 4, 7) == false);
    return 0;
}