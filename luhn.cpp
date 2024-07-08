#include <vector>

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
    return sum;