```
#include <iostream>
#include <string>
#include <vector>

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

std::vector<std::string> separate_paren_groups(const std::string& str) {
    std::vector<std::string> groups;
    int level = 0;
    std::string current_group;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            level++;
            current_group += str[i];
        } else if (str[i] == ')') {
            level--;
            if (level == 0) {
                groups.push_back(current_group);
                current_group = "";
            } else {
                current_group += str[i];
            }
        } else {
            current_group += str[i];
        }
    }
    return groups;
}

int main() {
    std::vector<std::string> input = {"( ) (( )) (( )( ))"};
    std::vector<std::string> expected_output = {"()", "(())", "(()())"};

    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    return 0;
}
```