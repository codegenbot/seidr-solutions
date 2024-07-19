#include <iostream>
#include <string>

int digitSum(const std::string& s) {
    int sum = 0;
    for (auto c : s) {
        if (std::isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;  
    int result = digitSum(input);
    std::cout << "The sum of digits is: " << result << std::endl;
    return 0;
}