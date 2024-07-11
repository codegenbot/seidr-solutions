```cpp
#include <vector>
#include <iostream>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i] * (doubleNext ? 2 : 1);

        if (digit > 9) {
            digit -= 9;
        }

        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}

int main() {
    std::vector<int> cardNumber = {4, 3, 7, 2, 1};
    int result = luhn(cardNumber);
    std::cout << "The Luhn check value is: " << result << std::endl;
    return 0;
}