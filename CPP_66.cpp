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
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> std::ws; 
    std::getline(std::cin, input);
    size_t pos = 0;
    while (pos < input.size() && ::isspace(input[pos])) {
        ++pos;
    }
    input.erase(0, pos);
    if (!input.empty()) { 
        int digitPos = -1;
        for (int i = 0; i < input.size(); ++i) {
            if (!std::isdigit(input[i])) {
                digitPos = i;
                break;
            }
        }
        if (digitPos == -1) {
            int result = digitSum(input);
            std::cout << "The sum of digits is: " << result << std::endl;
        } else {
            int result = digitSum(input.substr(0, digitPos));
            std::cout << "The sum of digits is: " << result << std::endl;
        }
    } else {
        std::cout << "Error: Empty input." << std::endl;
    }
    return 0;
}