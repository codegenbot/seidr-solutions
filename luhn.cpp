#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        int digit = digits[i];
        if ((i % 2 == digits.size() % 2 && digit != 9)) { 
            digit *= 2;   
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
    }

    return sum;
}