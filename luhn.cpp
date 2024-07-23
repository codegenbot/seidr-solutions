#include <vector>
#include <iostream>
#include <string>

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
    std::string cardNumber;
    
    std::cout << "Enter your credit card number: ";
    std::cin >> cardNumber;

    for(int i = 0; i < 16; ++i){
        int digit = (cardNumber[i] - '0');
        if(digit >= 0 && digit <= 9) {
            digits.push_back(digit);
        } else {
            std::cout << "Invalid input. Please enter a digit between 0 and 9." << std::endl;
            return -1; 
        }
    }
    
    int result = luhn(digits);
    std::cout << "The sum of the digits is: " << result << std::endl;
    return 0;
}