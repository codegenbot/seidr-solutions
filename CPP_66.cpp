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
    int result = digitSum(input.erase(0, input.find_first_not_of("0123456789")));
    std::cout << "The sum of digits is: " << result << std::endl;
    return 0;
}