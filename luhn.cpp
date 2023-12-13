```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> digits;

    for (int i = 0; i < 16; i++) {
        int digit;
        std::cin >> digit;
        digits.push_back(digit);
    }

    int sum = 0;
    for (int i = 14; i >= 0; i -= 2) {
        int doubledDigit = 2 * digits[i];
        if (doubledDigit > 9) {
            doubledDigit -= 9;
        }
        sum += doubledDigit;
    }

    for (int i = 15; i >= 0; i -= 2) {
        sum += digits[i];
    }

    std::cout << sum << std::endl;

    return 0;
}
```