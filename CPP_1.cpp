```
#include <iostream>
#include <string>
#include <vector>

bool issame(std::string a, std::string b) {
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

std::vector<std::string> separate_paren_groups(const std::vector<std::string>& input) {
    std::vector<std::string> output;

    for (const auto& group : input) {
        if (!group.empty()) {
            int count = 0;
            std::string current_group;
            for (char c : group) {
                if (c == '(') {
                    count++;
                } else if (c == ')') {
                    count--;
                }
                if (count == 0 && !current_group.empty()) {
                    output.push_back(current_group);
                    current_group = "";
                }
                current_group += c;
            }
        }
    }

    return output;
}

int main() {
    std::vector<std::string> input = {"( ) (( )) (( )( ))"};
    std::vector<std::string> expected_output = {"()", "(())", "(()())"};

    assert(separate_paren_groups(input) == expected_output);

    return 0;
}
```