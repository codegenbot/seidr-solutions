#include <vector>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool alternate = false; 
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        sum += cardNumber[i] * (alternate ? 2 : 1);
        if (sum > 9) {
            sum -= 9;
        }
        alternate = !alternate; 
    }
    return sum % 10;
}

int main() {
    std::vector<int> cardNumber = {4,3,2,8,7,9,6,0,5,5,4,5}; // Replace with your actual credit card number
    int result = luhn(cardNumber);
    return 0;
}