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

std::vector<std::string> separate_paren_groups(const std::string& input) {
    // ...
}

int main() {
    std::string input = "( ) (( )) (( )( ))";
    std::vector<std::string> expectedOutput = {"()", "(())", "(()())"};

    assert(issame(separate_paren_groups(input), expectedOutput));

    return 0;
}