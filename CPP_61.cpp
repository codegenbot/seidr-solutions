#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (auto it = brackets.begin(); it != brackets.end(); ++it) {
        char c = *it;
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}