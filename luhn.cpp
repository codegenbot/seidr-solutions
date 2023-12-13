```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> digits(16);

    for (int i = 0; i < 16; i++) {
        std::cin >> digits[i];
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