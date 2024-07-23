#include <vector>

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (i % 2 == 1) {
            if ((digits[i] * 2) > 9) {
                sum += (digits[i] * 2) - 9;
            } else {
                sum += digits[i] * 2;
            }
        } else {
            sum += digits[i];
        }
    }
    return sum;
}