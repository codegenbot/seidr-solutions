#include <vector>
#include <iostream>

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

int main() {
    std::vector<int> digits;
    int cardNumber;
    
    for(int i = 0; i < 16; ++i){
        std::cout << "Enter the " << (i+1) << "th digit of your credit card number: ";
        std::cin >> cardNumber;
        digits.push_back(cardNumber);
    }
    
    int result = luhn(digits);
    std::cout << "The sum of the digits is: " << result << std::endl;
    return 0;
}