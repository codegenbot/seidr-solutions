```cpp
#include <vector>
#include <string>

std::vector<std::string> lst = {"(a)", "b()", "()c"};

int match_parens(std::vector<std::string> lst) {
    int countOpen = 0, countClose = 0;

    for (const std::string &s : lst) {
        for (char c : s) {
            if (c == '(') {
                countOpen++;
            } else {
                countClose++;
            }
        }
    }

    if (countOpen == countClose) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    assert(match_parens({{"", "("}}) == 1);
    return 0;
}