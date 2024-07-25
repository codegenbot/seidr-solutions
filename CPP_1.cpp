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
    std::string current_group = "";
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return std::vector<std::string>(result.begin(), result.end());
}