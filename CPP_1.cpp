```cpp
#include <iostream>
#include <string>
#include <vector>

int test_main() {
    assert(issame(separate_paren_groups("( ) (( "),"{}","{(())", "(())"}"));
    return 0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    for (std::string s : a) {
        bool found = false;
        for (std::string t : b) {
            if (s == t) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group = "";  // Initialize current_group

    for (char c : paren_string) {
        if (c == '(') {
            current_group += c;
        } else if (c == ')') {
            current_group += c;
            if (current_group.back() == ')') {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}