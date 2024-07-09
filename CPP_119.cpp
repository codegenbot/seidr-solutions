#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int countOpen = 0, countClose = 0;

    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                countOpen++;
            } else {
                countClose++;
            }
        }
    }

    if ((countOpen == 0 && countClose % 2 == 1) || (countOpen > countClose)) {
        return "No";
    } else {
        return "Yes";
    }
}