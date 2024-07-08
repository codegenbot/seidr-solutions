#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum1 = 0; // for even indices
    int sum2 = 0; // for odd indices
    
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i];
        if (!doubleNext) { 
            sum1 += digit; // single digits for even indices
        } else { // it's time to double the next digit
            digit *= 2;
            if (digit > 9) digit -= 9;
            sum2 += digit; // doubled and possibly reduced digits for odd indices            
        }
        doubleNext = !doubleNext; // toggle for the next iteration
    }
    
    return (sum1 + sum2) % 10; 
}

int main() {
    std::vector<int> digits;
    int cardNumber;
    
    // Get the card number from user
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