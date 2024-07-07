#include <string>
#include <initializer_list>
#include <assert.h>

std::string match_parens(std::initializer_list<std::string> lst) {
    std::string str;
    for (const std::string& s : lst) {
        str += s;
    }
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '(') open++;
        else if (c == ')') close++;
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    assert(match_parens({")", "("}) == "Yes");
    return 0;
}