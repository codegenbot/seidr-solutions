```cpp
#include <vector>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i > 0; --i) {
        if (i % 2 != 0 || !doubleNext) {
            sum += cardNumber[i-1];
        } else {
            int digit = cardNumber[i-1] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
            doubleNext = true;
        }
    }

    return sum % 10 == 0 ? 0 : -1; // Return 0 if valid, and -1 if invalid
}