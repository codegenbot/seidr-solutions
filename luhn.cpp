```cpp
#include <vector>
#include <algorithm>

int luhn(const std::vector<int>& cardNumber) {
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

int main() {
    std::vector<int> cardNumber = {4, 3, 3, 2, 7, 1, 6, 9, 3, 5, 8, 1, 4, 0, 6, 7};
    int result = luhn(cardNumber);
    return 0;
}