
#include <iostream>
#include <string>
#include <vector>
#include <std/pmr>

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

std::vector<std::string> separate_paren_groups(std::string input) {
    std::vector<std::string> result;
    int start = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '(') {
            start = i + 1;
        } else if (input[i] == ')') {
            result.push_back(input.substr(start, i - start));
        }
    }
    return result;
}

int main() {
    std::string input = "( ) (( )) (( )( ))";
    std::vector<std::string> expectedOutput = {"()", "(())", "(()())"};

    assert(issame(separate_paren_groups(input), expectedOutput));

    return 0;
}