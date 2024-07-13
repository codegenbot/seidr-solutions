```cpp
#include <vector>
#include <algorithm>

int luhn(std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        if (doubleNext) {
            digit = std::stoi(std::to_string(digits[i]) + std::to_string(digits[i]));
            if (digit > 9) {
                digit -= 9;
            }
        } else {
            digit = digits[i];
        }
        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}