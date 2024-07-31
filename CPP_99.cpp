#include <iostream>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = stod(value);
    int intNum = static_cast<int>(std::round(num));
    return (num - intNum < 0) ? intNum - 1 : intNum + 1;
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}