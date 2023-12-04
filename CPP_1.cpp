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
    std::vector<std::string> result;
    int level = 0;
    std::string current;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            level++;
            if (level == 1) {
                current += str[i];
            }
        } else if (str[i] == ')') {
            level--;
            if (level == 0) {
                result.push_back(current);
                current = "";
            }
        } else {
            if (level > 0) {
                current += str[i];
            }
        }
    }

    return result;
}

int main() {
    std::vector<std::string> input = {"( ) (( )) (( )( ))"};
    std::vector<std::string> expected_output = {"()", "(())", "(()())"};

    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), expected_output));

    return 0;
}
```