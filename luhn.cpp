#include <vector>
#include <algorithm>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool alternate = true; 
    for (auto it = cardNumber.rbegin(); it != cardNumber.rend(); ++it) {
        int digit = (*it * 2) % 10 + (*it / 10);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        alternate = !alternate; 
    }
    return sum % 10;

}

int main() {
    std::vector<int> cardNumber = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 3, 1, 6, 4, 3, 5};
    return luhn(cardNumber);
}