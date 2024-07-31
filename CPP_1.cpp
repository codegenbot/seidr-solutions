#include <vector>
#include <string>

bool issame(const std::string& group) {
    char first = group[0];
    for (char ch : group) {
        if (ch != first) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> separate_paren_groups(std::string paren_string);

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    bool in_group = false;

    for (char ch : paren_string) {
        if (ch == '(') {
            if (in_group) {
                if (!current_group.empty() && issame(current_group)) {
                    result.push_back(current_group);
                }
                current_group = "";
            }
            in_group = true;
        } else if (ch == ')') {
            in_group = false;
            if (!current_group.empty() && issame(current_group)) {
                result.push_back(current_group);
            }
            current_group = "";
        } else if (in_group) {
            current_group += ch;
        }
    }

    if (!current_group.empty() && issame(current_group)) {
        result.push_back(current_group);
    }

    return result;
}