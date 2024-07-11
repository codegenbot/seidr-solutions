```cpp
#include <vector>
#include <initializer_list>

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
    std::vector<int> cardNumber = {4, 7, 3, 1, 3, 9, 2, 6, 5, 1, 4, 4, 0, 1, 9, 3};
    int result = luhn(cardNumber);
    return 0;
}