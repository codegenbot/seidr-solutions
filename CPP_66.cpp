```cpp
#include <iostream>
#include <string>

int main {
    std::cout << "Input your string: ";
    std::string input;
    std::cin >> input;
    int result = digitSum(input);
    std::cout << "Result: " << result << std::endl;
}

int digitSum(std::string str) {
    int sum = 0;
    for (char c : str) {
        if (isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;