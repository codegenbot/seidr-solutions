#include <string>
#include <vector>

bool match_parens(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close;
}

int main() {
    std::vector<std::string> lst = {"(a)", "(b(c))"};
    bool result = match_parens(lst);
    if (result)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}