#include <iostream>
#include <string>
#include <vector>

int luhn(const std::vector<std::string>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = stoi(digits[i]);
        int doubled = digit * 2;
        if (doubled > 9) {
            sum += doubled - 9;
        } else {
            sum += digit;
        }
    }
    return sum;
}