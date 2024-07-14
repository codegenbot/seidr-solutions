#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (i % 2 == 0) { 
            int digit = (digits[i] * 2) % 10;
            if (digit >= 9) digit -= 9; 
            sum += digit;
        } else
            sum += digits[i]; 
    }
    return sum;
}

int main() {
    std::vector<int> digits;
    int cardNumber;
    for(int i = 0; i < 16; ++i){
        std::cout << "Enter the " << (i+1) << " digit of your credit card number: ";
        std::cin >> cardNumber;
        digits.push_back(cardNumber);
    }
    int result = luhn(digits);
    std::cout << "Result: " << result << std::endl;
    return 0;
}