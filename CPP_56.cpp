#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (int i = 0; i < brackets.length(); i++) {
        if (brackets[i] == '<') {
            count++;
        }
        else if (brackets[i] == '>') {
            if (count == 0) {
                return false;
            }
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string brackets;
    std::getline(std::cin, brackets);
    if (correct_bracketing(brackets)) {
        std::cout << "Brackets are correctly balanced." << std::endl;
    }
    else {
        std::cout << "Brackets are not correctly balanced." << std::endl;
    }
    return 0;
}