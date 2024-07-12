```cpp
#include <iostream>
#include <string>

int digitSum(std::string s) {
    int sum = 0;
    std::string temp = s; // copy input string to temp

    while (!temp.empty()) {
        if (!temp.empty()) {
            int digit = temp[0] - '0';
            sum += digit;
            temp.erase(0, 1); // remove first character from temp
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