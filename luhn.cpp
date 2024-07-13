#include <iostream>
#include <vector>

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
    std::vector<int> cardNumber = {4,3,2,1,8,7,6,5,4,3,2,1};
    if (luhn(cardNumber) == 0) {
        std::cout << "The credit card number is valid." << std::endl;
    } else {
        std::cout << "The credit card number is not valid." << std::endl;
    }
    return 0;
}