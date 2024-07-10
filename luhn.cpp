#include <vector>
#include <iostream>

int luhn(std::vector<int> card) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i] * (doubleNext ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}

int main() {
    std::vector<int> card;
    int num;

    for (int i = 0; i < 16; ++i) {
        std::cin >> num;
        card.push_back(num);
    }

    int result = luhn(card);

    if (result % 10 == 0)
        std::cout << "Credit Card Number is Valid";
    else
        std::cout << "Credit Card Number is Invalid";

    return result;
}