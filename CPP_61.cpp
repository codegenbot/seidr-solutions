#include <string>
#include <iostream>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (int i = 0; i < brackets.length(); i++) {
        if (brackets[i] == '(') {
            count++;
        }
        else if (brackets[i] == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string of brackets: ";
    std::cin >> input;
    
    if (correct_bracketing(input)) {
        std::cout << "The brackets are correctly balanced." << std::endl;
    }
    else {
        std::cout << "The brackets are not correctly balanced." << std::endl;
    }
    
    return 0;
}