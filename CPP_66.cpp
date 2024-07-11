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
    std::string newInput = input.substr(pos, input.size() - pos);
    if (!newInput.empty()) { 
        int digitPos = -1;
        for (int i = 0; i < newInput.size(); ++i) {
            if (!std::isdigit(newInput[i])) {
                digitPos = i;
                break;
            }
        }
        if (digitPos == -1) {
            std::string digitsOnly;
            for (char c : newInput) {
                if(std::isdigit(c)) {
                    digitsOnly.push_back(c - '0' + '0');
                }
            }
            int result = 0;
            for (char c : digitsOnly) {
                result += (c - '0');
            }
            digitsOnly.clear();
            std::cout << "The sum of digits is: " << result << std::endl;
        } else {
            std::string digitsOnly;
            for (char c : newInput.substr(0, digitPos)) {
                if(std::isdigit(c)) {
                    digitsOnly.push_back(c - '0' + '0');
                }
            }
            int result = 0;
            for (char c : digitsOnly) {
                result += (c - '0');
            }
            digitsOnly.clear();
            std::cout << "The sum of digits is: " << result << std::endl;
        }
    } else {
        std::cout << "Error: Empty input." << std::endl;
    }
    return 0;
}