#include <vector>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool alternate = false; 
    for (const auto& digit : cardNumber) { 
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
    return sum % 10;