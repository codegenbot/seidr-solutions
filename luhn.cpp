```
#include <vector>
#include <iostream>
#include <cstring>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i];
        if (digit < 5) {
            sum += digit * 2;
        } else {
            sum += (digit * 2) % 9 + 1;
        }
    }
    return sum;
}

int main() {
    std::vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3};
    std::cout << luhn(digits) << std::endl;
    return 0;
}
```