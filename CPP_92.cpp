#include <iostream>
#include <cassert>
using namespace std;

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

int solveProblem() {
    cout << (isValidTriangle(3.01, 4, 7) ? "true" : "false") << endl;
    return 0;
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << (isValidTriangle(a, b, c) ? "true" : "false") << endl;
    assert(isValidTriangle(3, 4, 5) == true);
    return 0;
}