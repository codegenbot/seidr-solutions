```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> digits(16);

    for (int i = 0; i < 16; i++) {
        std::cin >> digits[i];
    }

    int sum = 0;
    for (int i = 15; i >= 0; i--) {
        if (i % 2 == 0) {
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