```cpp
#include <iostream>
#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int countOpen = 0, countClose = 0;

    for (const string &s : lst) {
        for (char c : s) {
            if (c == '(') {
                countOpen++;
            } else {
                countClose++;
            }
        }
    }

    if (countOpen == countClose) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    std::vector<std::string> lst = {")", "("};
    assert(match_parens({")", "("}) == "Yes" );
    return 0;
}