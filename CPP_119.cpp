#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int count = 0;
    for (const std::string& str : lst) {
        for (char c : str) {
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
    return (count == 0) ? "Yes" : "No";
}