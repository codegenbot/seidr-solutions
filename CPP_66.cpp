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
    int sum = 0;
    std::cout << "Enter a string: ";
    char c;
    while ((c = std::cin.get()) != '\n') {
        if (std::isdigit(c)) {
            sum += c - '0';
        }
    }
    std::cout << "The sum of digits is: " << sum << std::endl;
    return 0;
}