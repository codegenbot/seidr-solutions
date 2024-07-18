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
    std::string test1 = "((()))";
    std::string test2 = "(()))";
    
    std::cout << "Test 1 Result: " << correct_bracketing(test1) << std::endl;
    std::cout << "Test 2 Result: " << correct_bracketing(test2) << std::endl;
}

int main() {
    test_correct_bracketing();
    return 0;
}