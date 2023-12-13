```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> digits;

    std::copy_n(std::istream_iterator<int>(std::cin), 16, std::back_inserter(digits));

    int sum = 0;
    for (int i = 15; i >= 0; i -= 2) {
        int doubledDigit = digits[i] * 2;
        if (doubledDigit > 9) {
            doubledDigit -= 9;
        }
        sum += doubledDigit;
    }

    for (int i = 14; i >= 0; i -= 2) {
        sum += digits[i];
    }

    sum -= digits[0];

    std::cout << sum << std::endl;

    return 0;
}
```