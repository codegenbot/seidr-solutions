#include <iostream>
#include <string>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    return sum;

}

std::cout << "Enter a string: ";
std::cin >> input;

int result = digitSum(input);
std::cout << "Sum of digits: " << result << std::endl;