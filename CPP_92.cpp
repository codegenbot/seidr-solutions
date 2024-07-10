#include <cassert>
#include <iostream> // Include the necessary library

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    assert(isValidTriangle(3.01, 4, 7) == false);

    // Read user input and call the function
    double a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::boolalpha << isValidTriangle(a, b, c);

    return 0;
}