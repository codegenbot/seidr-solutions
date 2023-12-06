```
#include <iostream>
#include <string>

std::string circular_shift(int x, int shift) {
    std::string digits = std::to_string(x);

    if (shift > digits.length()) {
        return std::string(digits.rbegin(), digits.rend());
    } else {
        return std::string(digits.begin() + shift, digits.end()) + std::string(digits.begin(), digits.begin() + shift);
    }
}

int main() {
    int x = 123;
    int shift = 10;

    std::cout << "The circularly shifted number is: " << circular_shift(x, shift) << std::endl;

    return 0;
}
```