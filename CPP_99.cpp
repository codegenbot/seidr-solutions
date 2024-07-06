#include <cmath>
#include <iostream>
#include <string>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    return (num >= 0) ? ceil(num) : floor(num);
}

int main() {
    assert(closest_integer("0") == 0);
    // Rest of your code here
}