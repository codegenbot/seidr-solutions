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
        // Ignore other characters
    }
    return balance == 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string of brackets: ";
    std::cin >> input;
    if (correct_bracketing(input)) {
        std::cout << "Correctly bracketed!" << std::endl;
    } else {
        std::cout << "Incorrectly bracketed!" << std::endl;
    }
    return 0;
}