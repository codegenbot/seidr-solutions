#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(std::string value) {
    double num = stod(value);
    int rounded = (num > 0) ? floor(num + 0.5) : ceil(num - 0.5);
    return rounded;
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}