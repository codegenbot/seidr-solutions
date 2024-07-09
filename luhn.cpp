#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isDouble = false;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (isDouble) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isDouble = !isDouble;
    }
    return sum;
}

int main() {
    std::vector<int> digits;
    int i = 1; 
    while (i <= 16) {
        if (i % 2 == 0) { 
            digits.push_back(i); 
        } else {
            int doubleDigit = i * 2;
            if (doubleDigit > 9) {
                doubleDigit -= 9;
            }
            digits.push_back(doubleDigit);
        }
        i++;
    }
    int result = luhn(digits);
    std::cout << "The Luhn check digit is: " << result << std::endl;
    return 0;
}