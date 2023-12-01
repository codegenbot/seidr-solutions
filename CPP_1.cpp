#include <iostream>
#include <vector>

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> groups;
    std::string group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                group += c;
                groups.push_back(group);
                group = "";
            } else {
                group += c;
            }
        }
    }

    return groups;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    return 0;
}