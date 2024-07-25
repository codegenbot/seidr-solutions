#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    if (num < 0) {
        return std::ceil(num - 0.5);
    } else {
        return std::floor(num + 0.5);
    }
}

int main() {
    assert(closest_integer("0") == 0);
    // Add more test cases here
    return 0;
}