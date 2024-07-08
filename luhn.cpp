```cpp
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
    if (sum % 10 == 0) {
        std::cout << "The credit card number is valid." << std::endl;
    } else {
        std::cout << "The credit card number is not valid. Sum: " << sum << std::endl;
    }
    return sum;
}