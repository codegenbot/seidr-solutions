#include <string>
#include <vector>

std::string match_parens(std::vector<std::string> lst) {
    for (std::string s : lst) {
        int cnt = 0;
        for (char c : s) {
            if (c == '(') {
                cnt++;
            } else {
                if (cnt == 0) {
                    return "No";
                }
                cnt--;
            }
        }
        if (cnt != 0) {
            return "No";
        }
    }
    return "Yes";
}