#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int intNum = static_cast<int>(std::round(num));
    if (num - intNum < 0) {
        return intNum - 1;
    } else {
        return intNum + 1;
    }
}

int main() {
    // Test cases
    assert(closest_integer("0") == 0);
    
    return 0;
}