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
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (!input.empty()) { 
        std::string digits;
        for (char c : input) {
            if (std::isdigit(c)) {
                digits += c;
            }
        }
        int result = digitSum(digits);
        std::cout << "The sum of digits is: " << result << std::endl;
    } else {
        std::cout << "Error: Empty input." << std::endl;
    }
    return 0;
}