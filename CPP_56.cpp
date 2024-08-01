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
    std::string brackets;
    std::cout << "Enter the bracket sequence: ";
    std::cin >> brackets;
    
    std::cout << (correct_bracketing(brackets) ? "Brackets are correctly balanced" : "Brackets are not correctly balanced") << std::endl;
    
    return 0;
}