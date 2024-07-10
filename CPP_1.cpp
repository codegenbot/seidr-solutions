#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string &a, const std::string &b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(const std::string &paren_string) {
    std::vector<std::string> groups;
    std::string group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                group += c;
            } else if (balance == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}