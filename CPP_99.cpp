#include <iostream>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int rounded_num = (num > 0) ? std::floor(num + 0.5) : std::ceil(num - 0.5);
    return rounded_num;
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}