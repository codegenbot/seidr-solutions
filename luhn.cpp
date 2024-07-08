#include <iostream>
#include <string>
#include <vector>

int luhn(const std::vector<std::string>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = stoi(digits[i]) * 2;
        if (digit > 9 && digit < 20) {
            digit -= 9;
        } else if (digit >= 10) {
            digit -= 10;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    std::vector<std::string> input;
    int output = 0;

    // Read input from the user
    for (int i = 0; i < 16; i++) {
        std::cout << "Enter a digit: ";
        std::cin >> input[i];
    }

    // Apply Luhn's algorithm to the input
    output = luhn(input);

    // Print the result
    std::cout << "The sum of all of the new digits is: " << output << std::endl;

    return 0;
}