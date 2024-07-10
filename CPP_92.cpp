#include <cassert>
#include <iostream>

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

assert(!isValidTriangle(3.01, 4, 7));

double a, b, c;
std::cin >> a >> b >> c;
std::cout << std::boolalpha << isValidTriangle(a, b, c);

return 0;