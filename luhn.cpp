#include <vector>
#include <iostream>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool alternate = false; 
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = cardNumber[i] * (alternate ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        alternate = !alternate; 
    }
    return sum % 10;
}

int main() {
    std::vector<int> cardNumber = {4,3,2,8,7,9,6,0,5,5,4,9,3,2,8,7};
    int result = luhn(cardNumber);
    if (result == 0) {
        std::cout << "The credit card number is valid." << std::endl;
    } else {
        std::cout << "The credit card number is invalid." << std::endl;
    }
    return 0;
}