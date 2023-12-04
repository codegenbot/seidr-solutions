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

std::vector<std::string> separate_paren_groups(const std::vector<std::string>& input) {
    std::vector<std::string> output;
    for (const auto& str : input) {
        if (str.find('(') != std::string::npos && str.find(')') != std::string::npos) {
            output.push_back(str);
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