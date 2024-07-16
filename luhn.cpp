#include <vector>
using namespace std;

int luhnCheck(const vector<int>& cardNum) {
    int sum = 0;
    bool doubleDigit = false;

    for (int i = cardNum.size() - 1; i >= 0; --i) {
        int digit = cardNum[i];

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