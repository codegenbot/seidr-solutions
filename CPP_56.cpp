#include <iostream>
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int balance = 0;
    for (char ch : brackets) {
        if (ch == '<') {
            balance++;
        } else if (ch == '>') {
            balance--;
            if (balance < 0) {
                return false;
            }
        }
    }
    return balance == 0;
}

int main() {
    std::string test_case;
    std::cout << "Enter a string of brackets: ";
    std::cin >> test_case;
    if (correct_bracketing(test_case)) {
        std::cout << "The brackets are balanced.\n";
    } else {
        std::cout << "The brackets are not balanced.\n";
    }
    return 0;
}