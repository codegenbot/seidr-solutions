#include <string>
bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (auto it = brackets.begin(); it != brackets.end(); ++it) {
        if (*it == '<') {
            count++;
        } else if (*it == '>') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    assert(not (correct_bracketing("<><><<><>><>>><>")));
}