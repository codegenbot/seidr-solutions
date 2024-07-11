#include <vector>
using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    bool doubleAlternate = false;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (doubleAlternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleAlternate = !doubleAlternate;
    }
    return sum;
}