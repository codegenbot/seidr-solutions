```cpp
#include <iostream>
#include <string>

int digitSum(const std::string& str) {
    int sum = 0;
    for (char c : str) {
        if (std::isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    size_t pos = 0;
    while (pos < input.size() && ::isspace(input[pos])) {
        ++pos;
    }
    std::string newInput = input.substr(pos);
    if (!newInput.empty()) { 
        size_t digitPos = 0; // Use size_t for indexing into a string
        for (size_t i = 0; i < newInput.size(); ++i) {
            if (!std::isdigit(newInput[i])) {
                digitPos = i;
                break;
            }
        }
        if (digitPos == 0) {
            int result = digitSum(newInput);
            std::cout << "The sum of digits is: " << result << std::endl;
        } else {
            int result = digitSum(newInput.substr(0, digitPos));
            std::cout << "The sum of digits is: " << result << std::endl;
        }
    } else {
        std::cout << "Error: Empty input." << std::endl;
    }
    return 0;
}