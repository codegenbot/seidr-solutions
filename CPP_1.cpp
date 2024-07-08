#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& input) {
    std::vector<std::string> groups;
    int count = 0;
    std::string current_group;

    for (char c : input) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }

        current_group += c;

        if (count == 0) {
            groups.push_back(current_group);
            current_group.clear();
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