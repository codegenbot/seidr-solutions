#include <vector>
using namespace std;

int luhn(vector<int> cardNumber) {
    int sum = 0;
    bool doubleDigit = false;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        if (doubleDigit) {
            cardNumber[i] *= 2;
            if (cardNumber[i] > 9) {
                cardNumber[i] -= 9;
            }
        }
        sum += cardNumber[i];
        doubleDigit = !doubleDigit;
    }
    return sum;
}