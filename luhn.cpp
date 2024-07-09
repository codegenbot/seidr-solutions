#include <vector>
#include <iostream>

int luhn() {
    std::vector<int> digits;
    for (int i = 0; i < 16; i++) {
        int digit;
        std::cin >> digit;
        digits.push_back(digit);
    }
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i] * ((i % 2) + 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    return luhn();
}