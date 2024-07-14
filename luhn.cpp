#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleDigit = false;

    for (int i = 0; i < digits.size(); ++i) {
        if (doubleDigit) {
            int digit = (digits[i] * 2) % 10;
            if (digit > 9) digit -= 9;
            sum += digit;
        } else
            sum += digits[i];
        doubleDigit = !doubleDigit; 
    }
    return sum;