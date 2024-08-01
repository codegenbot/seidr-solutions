#include <iostream>
#include <string>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if (bracket == '<') {
            count++;
        } else if (bracket == '>') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string of brackets: ";
    std::cin >> input;

    if (correct_bracketing(input)) {
        std::cout << "The brackets are correctly matched." << std::endl;
    } else {
        std::cout << "The brackets are not correctly matched." << std::endl;
    }

    return 0;
}