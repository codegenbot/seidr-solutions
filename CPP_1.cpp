```c
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int test_main() {
    assert(issame(separate_paren_groups("( ) (( "),"{}","{(())", "(())"}"));
    return 0;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::includes(a.begin(), a.end(), b.begin(), b.end());
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
            if (open_count == 0 && !current_group.empty()) { 
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}