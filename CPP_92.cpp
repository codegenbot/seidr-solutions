#include <iostream>
#include <cassert>

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::boolalpha << isValidTriangle(a, b, c);

    return 0;
}