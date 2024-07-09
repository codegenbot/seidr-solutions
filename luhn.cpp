#include <vector>
#include <iostream>

int luhn() {
    int sum = 0;
    std::vector<int> digits;
    for (int i = 0; i < 16; i++) {
        int digit;
        std::cin >> digit;
        digits.push_back(digit);
    }
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
    std::cout << luhn();
}