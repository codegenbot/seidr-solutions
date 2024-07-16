#include <string>

bool correct_bracketing(const std::string& brackets) {
    int cnt = 0;
    for (char c : brackets) {
        if (c == '(') {
            cnt++;
        } else if (c == ')') {
            if (cnt == 0) {
                return false;
            }
            cnt--;
        }
    }
    return cnt == 0;
}

int main() {
    assert(correct_bracketing("((()))")); // Example test case
    return 0;
}