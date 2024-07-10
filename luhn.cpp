#include <vector>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        if ((cardNumber[i] * 2) > 9) {
            sum += (cardNumber[i] * 2) - 9;
        } else {
            sum += cardNumber[i] * 2;
        }
        if (i % 2 != 0) {
            sum += cardNumber[i];
        }
    }
    return sum;
}