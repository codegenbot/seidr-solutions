#include <iostream>
#include <string>

bool correct_bracketing(const std::string& brackets);

int main() {
    std::string input;
    std::cin >> input;
    if (correct_bracketing(input)) {
        std::cout << "The brackets are correctly paired." << std::endl;
    } else {
        std::cout << "The brackets are not correctly paired." << std::endl;
    }
    return 0;
}

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if (bracket == '<') {
            count++;
        } else if (bracket == '>') {
            count--;
        }
        if (count < 0) return false;
    }
    return count == 0;
}