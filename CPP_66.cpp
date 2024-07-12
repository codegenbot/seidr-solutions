```cpp
#include <iostream>
#include <string>

int digitSum(std::string s) {
    int sum = 0;
    while (!s.empty()) {
        if (!s.empty()) {
            int digit = s[0] - '0';
            sum += digit;
            s.erase(0, 1);
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = digitSum(input);
    std::cout << "The sum of digits is: " << result << std::endl;
}