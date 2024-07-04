#include <iostream>
#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += c - '0'; // Convert character digit to integer
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << digitSum(input) << std::endl;
    return 0;
}