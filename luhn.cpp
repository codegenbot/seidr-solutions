#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i];
        if (!doubleNext) { 
            sum += digit;
        } else { // it's time to double the next digit
            digit *= 2;
            if (digit > 9) digit -= 9;
            sum += digit;            
        }
        doubleNext = !doubleNext; // toggle for the next iteration
    }
    return sum % 10; 
}

int main() {
    std::vector<int> digits = {4,3,2,8,7,6,5,4,1}; 
    if (luhn(digits) == 0) {
        std::cout << "The credit card number is valid." << std::endl;
    } else {
        std::cout << "The credit card number is invalid." << std::endl;
    }
    return 0;
}