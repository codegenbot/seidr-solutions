```
#include <iostream>
#include <string>

int circular_shift(int x, int shift) {
    std::string digits = std::to_string(x);
    if (shift > digits.length()) {
        return std::stoi(digits.substr(1));
    } else {
        return std::stoi(digits.substr(shift) + digits.substr(0, shift));
    }
}

int main() {
    int x;
    int shift;
    std::cin >> x >> shift;
    std::cout << "The circularly shifted number is: " << circular_shift(x, shift) << std::endl;
    return 0;
}
```

Note: The code uses the `std::to_string` function to convert an integer to a string, and the `std::stoi` function to convert a string to an integer. These functions are part of the C++ Standard Library and are used to perform conversions between different data types.