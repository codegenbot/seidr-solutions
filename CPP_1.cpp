#include <cassert>
#include <vector>
#include <string>

std::vector<std::string> separate_paren_groups(const std::string& s) {
    std::vector<std::string> groups;
    int count = 0;
    std::string current_group = "";

    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }

        current_group += c;

        if (count == 0) {
            groups.push_back(current_group);
            current_group = "";
        }
    }

    return groups;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {{"()"}, {"(())"}, {"(()())"}});