#include <cassert>

bool isValidTriangle(double a, double b, double c) {
    if(a + b > c && a + c > b && b + c > a)
        return true;
    else
        return false;
}

int main() {
    assert(isValidTriangle(3.01, 4, 7) == false);
    return 0;
}