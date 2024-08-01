#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(const std::string& str) {
    std::vector<std::string> result;
    int count = 0;
    std::string current_group;

    for (char c : str) {
        if (c == '(') {
            if (count > 0) {
                result.push_back(current_group);
            }
            current_group.clear();
            count++;
        } else if (c == ')') {
            count--;
            result.push_back(current_group);
            current_group.clear();
        } else {
            current_group.push_back(c);
        }
    }

    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    return 0;
}