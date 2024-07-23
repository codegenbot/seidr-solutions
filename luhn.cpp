#include <vector>

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; --i) {
        if ((i % 2 == 0 && digits[i] * 2 > 9) || (i % 2 != 0)) {
            sum += ((i % 2 == 0) ? digits[i] * 2 : digits[i]) - (((i % 2 == 0) ? digits[i] * 2 : digits[i]) >= 9);
        } else {
            sum += digits[i];
        }
    }
    return sum;
}