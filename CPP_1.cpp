#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (depth > 0) {
                current_group += c;
            }
            depth++;
        } else if (c == ')') {
            depth--;
            if (depth > 0) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
}