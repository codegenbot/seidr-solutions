#include <vector>

std::vector<long long> luhn(std::vector<long long> cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }

    return {sum};
}