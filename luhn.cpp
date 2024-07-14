```cpp
#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleDigit = false;

    for (int i = 0; i < digits.size(); ++i) {
        if (doubleDigit) {
            int digit = (digits[i] * 2) % 10;
            if (digit > 9) digit -= 9;
            sum += digit;
        } else
            sum += digits[i];
        doubleDigit = !doubleDigit; 
    }
    
    return sum;
}

int main() {
    std::vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 6, 4, 3, 9, 0};
    int result = luhn(digits);
    std::cout << "The Luhn check digit is: " << result << std::endl;
    return 0;
}