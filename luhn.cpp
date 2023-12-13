```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<char> digits; // Change vector type to char

    for (int i = 0; i < 16; i++) {
        char digit; // Change data type to char
        std::cin >> digit;
        digits.push_back(digit);
    }

    int sum = 0;
    for (int i = 16 - 2; i >= 0; i -= 2) {
        int doubledDigit = (digits[i] - '0') * 2; // Convert char to int
        if (doubledDigit > 9) {
            doubledDigit -= 9;
        }
        sum += doubledDigit;
    }

    for (int i = 16 - 1; i >= 0; i -= 2) {
        sum += (digits[i] - '0');
    }

    std::cout << sum << std::endl;

    return 0;
}
```