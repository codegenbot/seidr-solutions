#include <vector>
#include <string>
#include <cassert>

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

std::vector<std::string> separate_paren_groups(const std::string& str) {
    std::vector<std::string> groups;
    std::string group;
    int openCount = 0;

    for (const char& c : str) {
        if (c == '(') {
            if (openCount > 0) {
                group += '(';
            }
            openCount++;
        } else if (c == ')') {
            openCount--;
            if (openCount == 0) {
                groups.push_back(group);
                group = "";
            } else {
                group += ')';
            }
        }
    }

    return groups;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}