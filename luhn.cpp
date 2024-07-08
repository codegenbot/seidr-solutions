```c++
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
    int digit;

    while (true) {
        std::cout << "Enter a credit card number (16 digits): ";
        for (int i = 0; i < 16; ++i) {
            if(i>=10){
                std::cout<<"Invalid input. Please enter 16 digits only.\n";
                cardNumber.clear();
                break;
            }
            std::cin >> digit;
            cardNumber.push_back(digit);
        }
        if (cardNumber.size() == 16)
            break;
    }

    int result = luhn(cardNumber);

    std::cout << "The Luhn number is: " << result << "\n";

    return 0;
}