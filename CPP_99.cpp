#include <iostream>
#include <cassert>
#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int closestInt = round(num);
    if (num - closestInt == 0.5) {
        closestInt = ceil(num);
    } else if (num - closestInt == -0.5) {
        closestInt = floor(num);
    }
    return closestInt;
}

int main() {
    assert (closest_integer("0") == 0);
}