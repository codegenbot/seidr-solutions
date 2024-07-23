#include <vector>

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (i % 2 == 1) {
            sum += digits[i];
        } else {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        }
    }
    return sum;
}