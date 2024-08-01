#include <vector>
#include <string>
#include <cassert>
#include <stack>

bool compare_vectors(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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
    std::stack<char> stk;
    std::string current_group;
    std::vector<std::string> groups;

    for (char c : input) {
        if (c == '(') {
            stk.push(c);
            if (stk.size() > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            stk.pop();
            if (stk.empty()) {
                groups.push_back(current_group);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }

    return groups;
}

int main() {
    assert(compare_vectors(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}