#include <iostream>
#include <string>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '<') {
            count++;
        } else if (c == '>') {
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
    std::cin >> brackets;
    
    if (correct_bracketing(brackets)) {
        std::cout << "Brackets are correctly balanced." << std::endl;
    } else {
        std::cout << "Brackets are not correctly balanced." << std::endl;
    }

    return 0;
}