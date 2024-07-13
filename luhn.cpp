#include <string>

int luhn(std::string cardNumber) {
    int sum = 0;
    bool alternate = false; 
    for (char c : cardNumber) { 
        if (c >= '0' && c <= '9') {
            int digit = c - '0'; 
            if (alternate) {
                int doubled = digit * 2; 
                if (doubled > 9) {
                    doubled -= 9; 
                }
                sum += doubled;
            } else {
                sum += digit; 
            }
            alternate = !alternate; 
        }
    }
    return sum % 10;
}