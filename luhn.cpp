#include <iostream>
#include <vector>
using namespace std;

int luhn(vector<int> cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i] * (doubleNext ? 2 : 1);

        if (digit > 9) {
            digit -= 9;
        }

        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}