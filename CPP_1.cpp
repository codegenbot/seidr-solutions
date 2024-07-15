#include <iostream>
#include <string>
#include <vector>

bool issame(char a, char b) {
    return (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(' || c == '[' || c == '{') {
            if (open_braces > 0) {
                current_group.push_back(c);
            }
            open_braces++;
        } else if (c == ')' || c == ']' || c == '}') {
            open_braces--;
            if (open_braces > 0 || !current_group.empty()) {
                current_group.push_back(c);
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}