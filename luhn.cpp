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
    while(digits.size() < 16){
        int cardNumber;
        std::cout << "Enter the next digit of your credit card number: ";
        if (!(std::cin >> cardNumber)) {
            std::cout << "Invalid input. Please enter a valid digit." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            digits.push_back(cardNumber);
        }
    }
    int result = luhn(digits);
    std::cout << "Result: " << result << std::endl;
    return 0;
}