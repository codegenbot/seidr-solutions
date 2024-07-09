#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isSecond = false; 
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (isSecond) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isSecond = !isSecond; 
    }
    return sum;
}

int main() {
    // Example usage
    std::vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 0};
    int result = luhn(digits);
    return 0;
}