```cpp
#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int digit = (i % 2 == 1) ? digits[i] * 2 : digits[i];
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }

    return sum;
}

int main() {
    std::vector<int> digits;
    int cardNumber;
    
    for(int i = 0; i < 16; i++) {
        std::cout << "Enter the " << (i+1) << "th digit of your credit card number: ";
        std::cin >> cardNumber;
        digits.push_back(cardNumber);
    }
    
    int result = luhn(digits);
    std::cout << "The Luhn check sum is: " << result << std::endl;

    return 0;
}