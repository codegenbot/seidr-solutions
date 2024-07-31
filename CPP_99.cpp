#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    float num = std::stof(value);
    int rounded = std::round(num);
    if (num - rounded == 0.5) {
        return (num > 0) ? std::ceil(num) : std::floor(num);
    } else {
        return std::round(num);
    }
}

int main() {
    assert (closest_integer("0") == 0);
    return 0;
}