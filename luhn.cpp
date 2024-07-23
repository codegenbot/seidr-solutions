#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isDouble = false;

    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i];
        
        if ((i % 2) == 1) { 
            if (digit * 2 > 9) {
                digit = digit * 2 - 9;
            } else {
                digit *= 2;
            }
        }

        sum += digit; 
    }

    return sum % 10;
}

int main() {
    std::vector<int> digits = {4, 3, 2, 1, 8, 5, 9, 6, 7, 2, 0, 8, 4};
    int result = luhn(digits);
    return 0;
}