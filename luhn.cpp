```
#include <vector>
int luhn(const std::vector<int>& cardNumber) {
    if(cardNumber.size() != 16){
        throw std::invalid_argument("Invalid credit card number. The length must be 16.");
    }
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];

        if ((cardNumber.size() % 2 == 0 && i % 2 != 0) || (cardNumber.size() % 2 != 0 && i % 2 == 0)) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
    }

    return sum;
}