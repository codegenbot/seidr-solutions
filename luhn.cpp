#include <iostream>

int luhn(int cardNumber) {
    int sum = 0;
    for (int i = cardNumber.length() - 1; i >= 0; --i) {
        int digit = cardNumber[i] - '0';
        if ((cardNumber.length() - i) % 2 == 1) {
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
    int sum = luhn(cardNumber);
    std::cout << sum << std::endl;
    return 0;
}