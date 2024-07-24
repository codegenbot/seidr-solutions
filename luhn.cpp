#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool alternate = false;

    for (int i = digits.size() - 1; i >= 0; i--) {
        if (alternate) {
            int digit = 2 * digits[i];
            if (digit > 9)
                sum += (digit % 10) + 1;
            else
                sum += digit;
        } else {
            sum += digits[i];
        }
        alternate = !alternate;
    }

    return sum;
}