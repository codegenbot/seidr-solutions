```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> digits;

    for (int i = 0; i < 16; i++) {
        int digit;
        std::cin >> digit;
        digits.push_back(digit);
    }
    
    std::reverse(digits.begin(), digits.end());

    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if (i % 2 == 1) {
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9) {
                doubledDigit -= 9;
            }
            sum += doubledDigit;
        } else {
            sum += digits[i];
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
```