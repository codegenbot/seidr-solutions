#include <iostream>
#include <string>
#include <cassert>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int rounded_num = static_cast<int>(num + (num >= 0 ? 0.5 : -0.5));
    return rounded_num;
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}