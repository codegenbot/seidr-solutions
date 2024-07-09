#include <vector>
#include <string>

std::vector<std::string> lst = {"(a)", "b(c(d))"};

int match_parens(const std::vector<std::string>& v) {
    int totalOpen = 0, totalClose = 0;
    for(auto str : v) {
        for(char c : str) {
            if(c == '(') totalOpen++;
            else if(c == ')') totalClose++;
        }
    }
    if(totalOpen == totalClose)
        return "Yes";
    else
        return "No";
}

int main() {
    assert(match_parens({}) == "Yes");
    std::cout << match_parens(lst) << std::endl;
    return 0;
}