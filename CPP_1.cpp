#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& input) {
    std::vector<std::string> groups;
    int balance = 0;
    std::string current_group;

    for (char c : input) {
        if (c == '(') {
            balance++;
            if (balance > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            } else {
                groups.push_back(current_group);
                current_group.clear();
            }
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

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}