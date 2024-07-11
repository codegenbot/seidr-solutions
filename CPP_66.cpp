```cpp
#include <string>
#include <cctype>

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
    std::cout << "Enter a string: ";
    std::string input;
    char c;
    do {
        c = std::cin.get();
    } while (c == ' ');
    std::cin >> input;
    if (!input.empty()) { 
        size_t pos = std::string::npos;
        for (char c : input) {
            if (!std::isdigit(c)) {
                pos = input.find(c);
                break;
            }
        }
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