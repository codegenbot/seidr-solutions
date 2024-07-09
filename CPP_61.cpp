```
#include <iostream>
#include <string>

bool correct_bracketing(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            ++count;
        } else if (c == ')') {
            if (count <= 0) return false;
            --count;
        }
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (correct_bracketing(input)) {
        std::cout << "Correct bracketing." << std::endl;
    } else {
        std::cout << "Incorrect bracketing." << std::endl;
    }
    return 0;
}