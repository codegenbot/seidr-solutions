#include <vector>
#include <iostream>

int luhn() {
    std::vector<int> digits;
    int digit;
    std::cout << "Enter a credit card number (16 digits): ";
    while (!(std::cin >> digit) || digit < 0 || digit > 9) {
        std::cout << "Invalid input. Please enter a digit between 0 and 9: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    for (int i = 1; i <= 16; i++) {
        int temp;
        while (!(std::cin >> temp) || temp < 0 || temp > 9) {
            std::cout << "Invalid input. Please enter a digit between 0 and 9: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        if (i % 2 != 0)
            digits.push_back(temp);
        else
            digits.push_back((temp * 2) > 9 ? (temp * 2) - 9 : temp * 2);
    }
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        sum += digits[i];
    }
    return sum;
}

int main() {
    return luhn();
}