#include <iostream>
#include <string>

bool correct_bracketing(const std::string &brackets) {
    int balance = 0;
    for (char ch : brackets) {
        if (ch == '(') balance++;
        else if (ch == ')') balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}

int main() {
    std::string test1 = "()()(()())";
    std::cout << correct_bracketing(test1) << std::endl;

    std::string test2 = "((())";
    std::cout << correct_bracketing(test2) << std::endl;

    std::string test3 = ")()(";
    std::cout << correct_bracketing(test3) << std::endl;
    
    std::string test4 = "(()())()";
    std::cout << correct_bracketing(test4) << std::endl;

    std::string test5 = "";
    std::cout << correct_bracketing(test5) << std::endl;

    return 0;
}