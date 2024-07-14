#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleDigit = false;

    for (int i = 0; i < digits.size(); ++i) {
        if (doubleDigit) {
            int digit = (digits[i] * 2) % 10;
            if (digit > 9) digit -= 9;
            sum += digit;
        } else
            sum += digits[i];
        doubleDigit = !doubleDigit; 
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5};
    int result = luhn(digits);
    std::cout << result << std::endl;
    return 0;
}