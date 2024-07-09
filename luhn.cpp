```cpp
#include <iostream>
#include <vector>

int luhn(std::vector<int> cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum % 10 == 0;
}

int main() {
    std::vector<int> cardNumber;
    int digit;

    for (int i = 0; i < 16; ++i) {
        while (!(std::cin >> digit) || digit < 0 || digit > 9) {
            std::cout << "Invalid input. Please enter a digit between 0 and 9: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cin >> std::ws;
        }
        cardNumber.push_back(digit);
    }

    if (luhn(cardNumber)) {
        std::cout << "The credit card number is valid." << std::endl;
    } else {
        std::cout << "The credit card number is not valid." << std::endl;
    }

    return 0;
}