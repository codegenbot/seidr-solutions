#include <iostream>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int rounded = static_cast<int>(std::round(num));
    if (std::abs(num - rounded) == 0.5) {
        return (num > 0) ? std::ceil(num) : std::floor(num);
    } else {
        return static_cast<int>(std::round(num));
    }
}

int main() {
    assert(closest_integer("0") == 0);
    // Add more test cases here
    return 0;
}