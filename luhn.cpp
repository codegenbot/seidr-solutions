#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        if (doubleNext) {
            int digit = digits[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += digits[i];
        }
        doubleNext = !doubleNext;
    }

    return sum;
}