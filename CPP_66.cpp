```cpp
#include <string>
#include <cassert>
#include <iostream>

int digitSum(std::basic_string<char> s) {
    int sum = 0;
    for (char c : s) {
        if (!isdigit(c)) {
            sum += static_cast<int>(c) - 'A' + 1; 
        } else {
            sum += c - '0';
        }
    }
    return sum;

}

int main() {
    std::cout << "Input your string: ";
    std::string input;
    std::cin >> input;
    int result = digitSum(input);
    std::cout << "Result: " << result << std::endl;
}