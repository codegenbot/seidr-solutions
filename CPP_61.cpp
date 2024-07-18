#include <iostream>
#include <string>

bool correct_bracketing(const std::string &brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if (bracket == '(') {
            count++;
        } else if (bracket == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}

void test_correct_bracketing() {
    std::string brackets1 = "((()))";
    std::string brackets2 = "()()()";
    std::string brackets3 = "(()";
    std::string brackets4 = ")";

    std::cout << correct_bracketing(brackets1) << std::endl;  // Output: 1 (true)
    std::cout << correct_bracketing(brackets2) << std::endl;  // Output: 1 (true)
    std::cout << correct_bracketing(brackets3) << std::endl;  // Output: 0 (false)
    std::cout << correct_bracketing(brackets4) << std::endl;  // Output: 0 (false)
}

int main() {
    test_correct_bracketing();
    return 0;
}