#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleDigit = false;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleDigit = !doubleDigit;
    }
    return sum;
}