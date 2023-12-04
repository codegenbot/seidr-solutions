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

std::vector<std::string> separate_paren_groups(std::vector<std::string> input) {
    std::vector<std::string> output;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == "(" || input[i] == ")") {
            continue;
        }
        output.push_back(input[i]);
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