```
#include <iostream>
#include <string>
#include <vector>

int circular_shift(int x, int shift) {
    std::string digits = std::to_string(x);
    if (shift > digits.length()) {
        return std::stoi(std::string(digits.rbegin(), digits.rend()));
    } else {
        return std::stoi(digits.substr(shift) + digits.substr(0, shift));
    }
}
```
This code should work correctly and fix the issue of backticks in C++ code.