#include <cassert>

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    assert(isValidTriangle(3.01, 4, 7) == false);

    return 0;
}