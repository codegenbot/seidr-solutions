#include <iostream>
#include <string>
#include <cctype>

int digitSum(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += c - '0'; // Convert char digit to int and add to sum
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::cout << "Sum of digits: " << digitSum(input) << std::endl;

    return 0;
}