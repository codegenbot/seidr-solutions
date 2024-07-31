#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using string = std::string;

bool issame(const std::vector<string>& a, const std::vector<string>& b){
    return a == b;
}

std::vector<string> separate_paren_groups(string paren_string) {
    std::vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else if (open_braces == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}