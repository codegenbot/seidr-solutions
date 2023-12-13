```cpp
#include <iostream>
#include <vector>

int main() {
    int n = 16;
    std::vector<int> digits(n);

    for (int i = 0; i < n; i++) {
        std::cin >> digits[i];
    }

    int sum = 0;
    for (int i = n - 2; i >= 0; i -= 2) {
        int doubledDigit = 2 * digits[i];
        if (doubledDigit > 9) {
            doubledDigit -= 9;
        }
        sum += doubledDigit;
    }

    for (int i = n - 1; i >= 0; i -= 2) {
        sum += digits[i];
    }

    std::cout << sum << std::endl;

    return 0;
}
```