#include <vector>

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
    // Example usage
    std::vector<int> cardNumber = {3,4,5};
    int result = luhn(cardNumber);
    return 0;
}