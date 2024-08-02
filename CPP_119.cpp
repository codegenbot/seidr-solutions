#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int countOpen = 0, countClose = 0;

    for (const auto& str : lst) {
        for (char c : str) {
            if (c == '(') {
                countOpen++;
            } else if (c == ')') {
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