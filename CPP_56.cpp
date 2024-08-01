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
    std::cin >> brackets;
  
    if (correct_bracketing(brackets)) {
        std::cout << "Brackets are correctly balanced.\n";
    } else {
        std::cout << "Brackets are not balanced.\n";
    }
  
    return 0;
}