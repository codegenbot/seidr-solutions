```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int test_main() {
    std::vector<std::string> expected = {"", "( "}, {" ("};
    if (separate_paren_groups("( ) (( ")) == expected) {
        return 0;
    } else {
        return -1;
    }
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

    return result;
}