#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isOdd = true; 
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i] * (isOdd ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        isOdd = !isOdd; 
    }
    return sum;