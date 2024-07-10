```
#include <iostream>
#include <vector>

int main() {
    std::vector<int> card = {4,7,5,1,3,2,8,6,9,0,5,3,9,4,4};
    int result = luhn(card);
    std::cout << "Luhn Check: " << (result % 10 == 0 ? "Valid" : "Invalid") << std::endl;
    return result;
}

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

    return sum % 10;
}