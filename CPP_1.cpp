#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& s) {
    std::vector<std::string> result;
    int count = 0;
    std::string group;
    
    for (char c : s) {
        if (c == '(') {
            if (count > 0) {
                result.push_back(group);
                group.clear();
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                result.push_back(group);
                group.clear();
            }
        }
        group.push_back(c);
    }

    if (!group.empty()) {
        result.push_back(group);
    }

    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}