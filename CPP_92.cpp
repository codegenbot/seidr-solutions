#include <iostream>

using namespace std;

bool isValidTriangle(double a, double b, double c);

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << boolalpha << isValidTriangle(a, b, c);

    return 0;
}