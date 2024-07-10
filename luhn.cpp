#include <vector>
#include <iostream>

int luhn(std::vector<int> card) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];

        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;

        doubleNext = !doubleNext;
    }

    return sum;
}

int main() {
    std::vector<int> card = {4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 0, 2, 0, 8};
    int result = luhn(card);
    if(result % 10 == 0) {
        std::cout << "The card number is valid" << std::endl;
    } else {
        std::cout << "The card number is invalid" << std::endl;
    }
    return 0;
}