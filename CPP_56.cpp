#include <iostream>
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char ch : brackets) {
        if (ch == '<') count++;
        else if (ch == '>') count--;
        if (count < 0) return false;
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cin >> input;
    if (correct_bracketing(input)) {
        std::cout << "Correct bracketing" << std::endl;
    } else {
        std::cout << "Incorrect bracketing" << std::endl;
    }
    return 0;
}