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
    std::string brackets = "((()()))";
    if (correct_bracketing(brackets)) {
        std::cout << "Brackets are correctly matched." << std::endl;
    } else {
        std::cout << "Brackets are incorrectly matched." << std::endl;
    }
}

int main() {
    test_correct_bracketing();
    return 0;
}