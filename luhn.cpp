#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum;
}

int main() {
    std::vector<int> cardNumber;

    for (int i = 0; i < 16; ++i) {
        std::cout << "Enter a credit card number: ";
        int digit;
        std::cin >> digit;
        cardNumber.push_back(digit);
    }

    int result = luhn(cardNumber);

    std::cout << "The Luhn number is: " << result << "\n";

    return 0;
}