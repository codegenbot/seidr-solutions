#include <string>
#include <iostream>
#include <cassert>
#include <ostream>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cin >> input;
    bool result = correct_bracketing(input);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}