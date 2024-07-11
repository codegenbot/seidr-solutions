```cpp
#include <string>
#include <cctype>
#include <limits>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += c - '0';
        }
    }
    return sum;
}

int main() {
    std::cin >> std::ws;
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    if (!input.empty()) { 
        bool foundNonDigit = false;
        for (char c : input) {
            if (!std::isdigit(c)) {
                foundNonDigit = true;
                break;
            }
        }
        size_t pos = foundNonDigit ? input.find_first_not_of("0123456789") : std::string::npos;
        if (pos == std::string::npos) {
            int result = digitSum(input);
            std::cout << "The sum of digits is: " << result << std::endl;
        } else {
            int result = digitSum(input.substr(0, pos));
            std::cout << "The sum of digits is: " << result << std::endl;
        }
    } else {
        std::cout << "Error: Empty input." << std::endl;
    }
    return 0;
}