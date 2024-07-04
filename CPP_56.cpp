#include <iostream>
#include <string>
#include <cassert>

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
    std::cout << "Enter bracket sequence: ";
    std::string input;
    std::cin >> input;
    if (correct_bracketing(input)) {
        std::cout << "Correct bracketing" << std::endl;
    } else {
        std::cout << "Incorrect bracketing" << std::endl;
    }
    return 0;
}