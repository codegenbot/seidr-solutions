#include <vector>

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