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
    std::vector<int> digits;
    int cardNumber;

    std::cout << "Enter a 16-digit credit card number: ";
    for(int i = 0; i < 16; ++i) {
        std::cin >> cardNumber;
        digits.push_back(cardNumber);
    }

    int result = luhn(digits);

    if(result == 0)
        std::cout << "The credit card number is valid." << std::endl;
    else
        std::cout << "The credit card number is not valid." << std::endl;

    return 0;
}