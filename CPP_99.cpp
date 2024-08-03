#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int rounded = (num > 0) ? static_cast<int>(std::floor(num + 0.5)) : static_cast<int>(std::ceil(num - 0.5));
    return rounded;
}

int main() {
    assert (closest_integer("0") == 0);
    
    return 0;
}