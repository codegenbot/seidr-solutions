#include <iostream>

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
    std::string brackets;
    std::cout << "Enter bracket sequence: ";
    std::cin >> brackets;

    if (correct_bracketing(brackets)) {
        std::cout << "Brackets are correctly balanced!" << std::endl;
    } else {
        std::cout << "Brackets are not correctly balanced!" << std::endl;
    }

    return 0;
}