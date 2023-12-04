```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> separate_paren_groups(const std::string& input) {
    std::vector<std::string> groups;

    int openParens = 0;
    std::string currentGroup;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '(') {
            openParens++;
            currentGroup += input[i];
        } else if (input[i] == ')') {
            openParens--;
            if (openParens == 0) {
                groups.push_back(currentGroup);
                currentGroup = "";
            } else {
                currentGroup += input[i];
            }
        } else {
            currentGroup += input[i];
        }
    }

    return groups;
}

int main() {
    std::string input = "( ) (( )) (( )( ))";
    std::vector<std::string> expectedOutput = {"()", "(())", "(()())"};

    assert(issame(separate_paren_groups(input), expectedOutput));

    return 0;
}
```