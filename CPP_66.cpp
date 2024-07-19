#include <iostream>
#include <string>
#include <cassert>

int digitSum(const std::string& s) {
    int sum = 0;
    for (auto c : s) {
        if (std::isdigit(c)) {
            char cNum = (c - '0'); 
            sum += cNum; 
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You are Very Smart") == 327);
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = digitSum(input);
    std::cout << "The sum of digits is: " << result << std::endl;
    return 0;
}