#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    if (num > 0) {
        return std::floor(num + 0.5);
    } else {
        return std::ceil(num - 0.5);
    }
}

int main() {
    assert(closest_integer("0") == 0);
    assert(closest_integer("2.25") == 2);
    assert(closest_integer("2.75") == 3);
    assert(closest_integer("-2.75") == -3);
    std::cout << "All tests passed." << std::endl;
    return 0;
}