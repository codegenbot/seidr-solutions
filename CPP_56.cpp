#include <iostream>
#include <string>

bool correct_bracketing(const std::string &brackets) {
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
    std::cout << "Enter a sequence of brackets (< and >): ";
    std::cin >> input;

    if (correct_bracketing(input)) {
        std::cout << "Brackets are correctly balanced." << std::endl;
    } else {
        std::cout << "Brackets are not correctly balanced." << std::endl;
    }

    return 0;
}