#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& paren_string) {
    std::vector<std::string> groups;
    std::string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            } else if (balance == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }

    return groups;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    
    return 0;
}