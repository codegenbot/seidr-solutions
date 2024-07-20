#include <string>
#include <vector>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                open++;
            } else if (open > 0) {
                open--;
            } else {
                close++;
            }
        }
    }
    return (open == 0 && close <= 1) ? "Yes" : "No";
}