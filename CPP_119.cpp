#include <string>
#include <vector>
#include <cassert>

std::string match_parens(std::vector<std::string> lst) {
    std::string result = "Yes";
    int count = 0;
    for (std::string s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else if (c == ')') {
                count--;
            }
        }
    }
    if (count != 0) {
        result = "No";
    }
    return result;
}

int main() {
    assert(match_parens({")", "("}) == "Yes");
    return 0;
}