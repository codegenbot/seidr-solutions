```cpp
#include <vector>

int luhn(const std::vector<char>& cardNumber) {
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