#include <vector>
#include <iostream>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool alternate = false; 
    for (int c : cardNumber) { 
        if (alternate) {
            int doubled = c * 2; 
            if (doubled > 9) {
                doubled -= 9; 
            }
            sum += doubled;
        } else {
            sum += c; 
        }
        alternate = !alternate; 
    }
    return sum % 10;
}

int main() {
    std::vector<int> cardNumber;

    int digit;
    for (int i = 0; i < 16; ++i) {
        std::cout << "Enter the " << (i+1) << "th digit of your credit card number: ";
        std::cin >> digit;
        cardNumber.push_back(digit);
    }

    int result = luhn(cardNumber); 

    if (result == 0) {
        std::cout << "Valid credit card number." << std::endl;
    } else {
        std::cout << "Invalid credit card number." << std::endl;
    }
    
    return 0; 
}