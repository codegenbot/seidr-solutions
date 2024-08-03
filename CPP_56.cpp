#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (int i = 0; i < brackets.size(); ++i) {
        char c = brackets[i];
        if (c == '<') {
            count++;
        } else if (c == '>') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}