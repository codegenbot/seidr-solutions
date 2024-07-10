#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int closestInt = std::round(num);
    if (num - closestInt == 0.5 || num - closestInt == -0.5) {
        closestInt += (num > 0) ? 1 : -1;
    }
    return closestInt;
}

int main() {
    assert (closest_integer("0") == 0);
    return 0;
}