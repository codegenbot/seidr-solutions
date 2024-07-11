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
    std::string input;
    std::cin >> input;  
    if (!input.empty()) { 
        int result = digitSum(input);
        std::cout << "The sum of digits is: " << result << std::endl;
    } else {
        std::cout << "Error: Empty input." << std::endl;
    }
    return 0;
}