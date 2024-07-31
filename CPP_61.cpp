#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count == 0) {
                return false;
            }
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string input = "(())()";
    bool result = correct_bracketing(input);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}