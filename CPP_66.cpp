#include <iostream>
#include <string>

int digitSum(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if(std::isdigit(c)) {
            sum += static_cast<int>(c - '0');
        }
    }
    return sum;
}

int calculateDigitSum() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = digitSum(input);
    std::cout << "The sum of digits is: " << result << std::endl;
    return 0;
}