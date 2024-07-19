```cpp
#include <string>
#include <iostream>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    int result = digitSum(input);
    std::cout << "Sum of digits is: " << result << std::endl;
    return 0;
}