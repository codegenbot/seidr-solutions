#include <vector>
#include <string>

bool issame(const std::string &s) {
    int count = 0;
    for (char ch : s) {
        if (ch == '(') {
            count++;
        } else if (ch == ')') {
            count--;
        }
    }
    return count == 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string);

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    bool in_group = false;

    for (char ch : paren_string) {
        if (ch == '(') {
            if (in_group && issame(current_group)) {
                result.push_back(current_group);
            }
            in_group = true;
            current_group = "";
        } else if (ch == ')') {
            in_group = false;
            if (issame(current_group)) {
                result.push_back(current_group);
            }
            current_group = "";
        } else if (in_group) {
            current_group += ch;
        }
    }

    if (in_group && issame(current_group)) {
        result.push_back(current_group);
    }

    return result;
}