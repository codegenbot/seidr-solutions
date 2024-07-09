#include <vector>
#include <iostream>

int luhn() {
    std::vector<int> digits;
    for (int i = 0; i < 16; i++) {
        int digit;
        while (!(std::cin >> digit) || digit < 0 || digit > 9) {
            std::cout << "Invalid input. Please enter a digit between 0 and 9: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
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