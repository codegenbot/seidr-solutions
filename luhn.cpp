#include <initializer_list>

int luhn(std::initializer_list<int> cardNumber) {
    int sum = 0;
    for (auto it = cardNumber.begin(); it != cardNumber.end(); ++it) {
        int digit = *it * ((cardNumber.size() - 1 - it.index()) % 2);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum % 10;