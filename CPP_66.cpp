```cpp
#include <string>
#include <cassert>
#include <iostream>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (!isdigit(c)) {
            sum += tolower(c) - 'a' + 1; 
        } else {
            sum += c - '0';
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
}