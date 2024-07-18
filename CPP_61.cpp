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
    std::string input1 = "((()))";
    std::string input2 = "(()())";
    std::string input3 = "(()))(";
    
    std::cout << "Input 1 result: " << (correct_bracketing(input1) ? "true" : "false") << std::endl;
    std::cout << "Input 2 result: " << (correct_bracketing(input2) ? "true" : "false") << std::endl;
    std::cout << "Input 3 result: " << (correct_bracketing(input3) ? "true" : "false") << std::endl;
}

int main() {
    test_correct_bracketing();
    return 0;
}