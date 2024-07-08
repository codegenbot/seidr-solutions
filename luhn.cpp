#include <iostream>
#include <vector>

int luhn(const std::vector<std::string>& digits) {
    int sum = 0;
    for (int i = 1; i < digits.size(); i += 2) { // start from the second digit and iterate over all odd indices
        int doubled_digit = stoi(digits[i]) * 2;
        if (doubled_digit > 9) {
            doubled_digit -= 9;
        }
        sum += doubled_digit;
    }
    return sum;
}