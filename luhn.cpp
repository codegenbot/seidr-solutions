```cpp
#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = true;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum;
}

int main() {
    std::vector<int> digits;
    int cardNumber;
    
    for(int i=0; i<16; ++i) {
        std::cout << "Enter digit #" << (i+1) << ": ";
        std::cin >> cardNumber;
        digits.push_back(cardNumber);
    }
    
    int result = luhn(digits);
    if(result % 10 == 0)
        std::cout << "The credit card number is valid." << std::endl;
    else
        std::cout << "The credit card number is not valid." << std::endl;
    
    return 0;
}