#include <vector>
int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleDigit = false;
    for (int i = 0; i < digits.size(); i++) {
        if (doubleDigit) {
            int doubleValue = digits[i] * 2;
            if (doubleValue > 9)
                sum += doubleValue - 9;
            else
                sum += doubleValue;
            doubleDigit = false;
        } else {
            sum += digits[i];
            doubleDigit = !doubleDigit;
        }
    }
    return sum;
}