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
    bool result = correct_bracketing("(())()((()))");
    return 0;
}