```
#include <iostream>
#include <string>

int circular_shift(int x, int shift) {
    std::string digits = std::to_string(x);
    if (shift > digits.length()) {
        return std::stoi(std::string(digits.rbegin(), digits.rend()));
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