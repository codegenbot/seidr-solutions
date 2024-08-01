#include <iostream>
#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int countOpen = 0, countClose = 0;

    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') {
                countOpen++;
            } else if (c == ')') {
                if (countOpen == 0) return "No";
                countOpen--;
            }
        }
    }

    if (countOpen > 0) return "No";

    return "Yes";
}

int main() {
    std::vector<std::string> lst = {")", "("};
    assert(match_parens(lst) == "Yes");
    return 0;
}