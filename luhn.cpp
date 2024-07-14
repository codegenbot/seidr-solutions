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
            doubleDigit = false; 
        } else {
            sum += digits[i];
            doubleDigit = true; 
        }
    }
    return sum;
}

int main() {
    std::vector<int> cardNumber = {3, 4, 5, 2, 8, 6, 1, 7, 9, 0, 2, 5, 8, 3, 4, 5};
    int result = luhn(cardNumber);
    std::cout << "Luhn Algorithm Result: " << result << std::endl;
    return 0;
}