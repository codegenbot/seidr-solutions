#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string match_parens(const std::vector<std::string> &lst) {
    int cnt = 0;
    for (const std::string &s : lst) {
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
    }
    return cnt == 0 ? "Yes" : "No";
}