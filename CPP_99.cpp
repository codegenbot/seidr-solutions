#include <iostream>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    if (num < 0) {
        return static_cast<int>(std::floor(num + 0.5));
    } else {
        return static_cast<int>(std::ceil(num - 0.5));
    }
}

int main() {
    assert (closest_integer("0") == 0);
    return 0;
}