#include <iostream>
#include <string>
#include <vector>

int luhn(const std::vector<std::string>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = stoi(digits[i]) * 2;
        if (digit > 9 && digit < 20) {
            digit -= 9;
        } else if (digit >= 20) {
            // Adjust the subtraction for two-digit numbers
            int secondDigit = stoi(digits[i + 1]);
            if (secondDigit > 9) {
                secondDigit -= 9;
            }
            digit = secondDigit - 9;
        }
        sum += digit;
    }
    return sum;
}