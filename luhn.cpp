```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<char> digits;

    for (int i = 0; i < 16; i++) {
        char digit;
        std::cin >> digit;
        digits.push_back(digit - '0');
    }

    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if (i % 2 == 1) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                doubled -= 9;
            }
            sum += doubled;
        } else {
            sum += digits[i];
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
```