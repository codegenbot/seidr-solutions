#include <iostream>

int luhn(int digits[16]) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 15; i >= 0; --i) {
        int digit = digits[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    if(sum % 10 != 0) {
        std::cout << "Invalid credit card number!" << std::endl;
        return -1;
    } else {
        return sum;
    }
}

int main() {
    int digits[16];
    for(int i = 0; i < 16; ++i) {
        std::cin >> digits[i];
    }
    
    luhn(digits);
    
    return 0;
}