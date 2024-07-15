#include <string>
#include <vector>
#include <cassert>

std::string match_parens(std::vector<std::string> lst) {
    int cnt = 0;
    for (std::string s : lst) {
        for (char c : s) {
            if (c == '(') {
                cnt++;
            } else if (c == ')' && cnt == 0) {
                return "No";
            } else {
                cnt--;
            }
        }
    }
    return cnt == 0 ? "Yes" : "No";
}