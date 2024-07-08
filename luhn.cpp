#include <iostream>
#include <string>
#include <vector>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i] * 2;
        if (digit > 9 && digit < 20) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum;
}