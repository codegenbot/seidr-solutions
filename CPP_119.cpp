#include <vector>
#include <string>

bool match_parens(std::vector<std::string> lst) {
    int open = 0;
    int close = 0;

    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }

    return open == close;
}