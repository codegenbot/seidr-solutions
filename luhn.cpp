#include <vector>
using namespace std;

int luhn(vector<int> cardNumber) {
    int sum = 0;
    bool doubleDigit = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int num = cardNumber[i];
        if (doubleDigit) {
            num *= 2;
            if (num > 9) {
                num -= 9;
            }
        }
        sum += num;
        doubleDigit = !doubleDigit;
    }

    return sum;
}