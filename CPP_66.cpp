```cpp
#include <iostream>
#include <string>

int digitSum(const std::string& s) {
    int sum = 0;
    for (auto c : s) {
        if (std::isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}

int main() {
    int input;
    std::cout << "Enter a number: ";
    while (!(std::cin >> input)) {
        std::cout << "Invalid input. Please enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter a number: ";
    }
    int result = digitSum(std::to_string(input));
    std::cout << "The sum of digits is: " << result << std::endl;
    return 0;
}