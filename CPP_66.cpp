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
    std::getline(std::cin, input);
    int result = 0;
    for (char c : input) {
        if (std::isdigit(c)) {
            result += c - '0';
        }
    }
    std::cout << "The sum of digits is: " << result << std::endl;
    return 0;
}