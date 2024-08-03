#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0;
    for (std::string s : lst) {
        for (char c : s) {
            if (c == '(') {
                open++;
            } else {
                if (open == 0) {
                    return "No";
                }
                open--;
            }
        }
    }
    return open == 0 ? "Yes" : "No";
}