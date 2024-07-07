#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    if (correct_bracketing(input)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (int i = 0; i < brackets.size(); i++) {
        if (brackets[i] == '(')
            count++;
        else
            if (count <= 0)
                return false;
            else
                count--;
    }
    return count == 0;
}