#include <iostream>
#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return open == close ? "Yes" : "No";
}

int main() {
    // Example test case
    assert (match_parens({")", "("}) == "Yes");
    return 0;
}