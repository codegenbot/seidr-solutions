#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int open = 0;
    int close = 0;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--;
                } else {
                    close++;
                }
            }
        }
    }
    return (open == 0 && close <= 1) ? "Yes" : "No";
}

int main() {
    std::vector<std::string> lst = {"()", "((", "))"};
    std::string result = match_parens(lst);
    return 0;
}