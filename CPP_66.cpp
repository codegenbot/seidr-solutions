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
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    // Check if the last character of the string is a newline
    if (input.back() == '\n') {
        input.pop_back();
    }
    int result = digitSum(input);
    std::cout << "The sum of digits is: " << result << std::endl;
    return 0;
}