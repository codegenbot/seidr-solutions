#include <vector>
#include <string>

std::vector<std::string> lst;

int match_parens(std::vector<std::string> str) {
    int countOpen = 0, countClose = 0;

    for (const std::string &s : str) {
        for (char c : s) {
            if (c == '(') {
                countOpen++;
            } else {
                countClose++;
            }
        }
    }

    if (countOpen == countClose) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    assert(match_parens({{"", "("})) == "Yes");
    return 0;
}