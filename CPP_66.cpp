#include <iostream>
#include <string>
#include <cassert>

int digitSum(const std::string& str) {
    int sum = 0;
    for (char c : str) {
        if (c >= '0' && c <= '9') {
            sum += (c - '0');
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    std::cout << "Input your string: ";
    std::string input;
    std::cin >> input;
    int result = digitSum(input);
    std::cout << "Result: " << result << std::endl;
    return 0;