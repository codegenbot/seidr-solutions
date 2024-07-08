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

std::vector<std::string> separate_paren_groups(const std::string& input) {
    std::vector<std::string> groups;
    std::string temp;
    int count = 0;

    for (char ch : input) {
        if (ch == '(') {
            if (count > 0) {
                temp += ch;
            }
            count++;
        } else if (ch == ')') {
            count--;
            if (count > 0) {
                temp += ch;
            }
            if (count == 0) {
                groups.push_back(temp);
                temp.clear();
            }
        }
    }

    return groups;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}