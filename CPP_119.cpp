#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int count = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else {
                if (count == 0) {
                    return "No";
                }
                count--;
            }
        }
    }
    return count == 0 ? "Yes" : "No";
}