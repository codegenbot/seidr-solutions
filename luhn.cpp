#include <vector>

int luhn(vector<int> digits) {
    int sum = 0;
    bool isDouble = false;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (isDouble) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isDouble = !isDouble;
    }
    return sum;
}