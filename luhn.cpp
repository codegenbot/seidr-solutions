#include <iostream>

int luhn(std::string cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.length(); ++i) {
        int digit = cardNumber[i] - '0';
        if ((i % 2) == 1) {
            int doubledDigit = digit * 2;
            if (doubledDigit > 9) {
                doubledDigit -= 9;
            }
            sum += doubledDigit;
        } else {
            sum += digit;
        }
    }
    return sum;
}

int main() {
    std::string cardNumber = "4321818976565432";
    std::cout << luhn(cardNumber) << std::endl;
    return 0;
}