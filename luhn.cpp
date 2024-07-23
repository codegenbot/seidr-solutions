#include <vector>

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; --i) {
        if ((i % 2 == 0 && digits[i] * 2 > 9) || (i % 2 != 0)) {
            sum += ((i % 2 == 0) ? digits[i] * 2 : digits[i]) - ((digits[i] * 2) / 10);
        } else {
            sum += digits[i] * 2;
        }
    }
    return (sum % 10) == 0; // Return 1 if the sum is divisible by 10, 0 otherwise
}