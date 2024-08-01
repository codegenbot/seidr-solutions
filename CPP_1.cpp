#include <vector>
#include <string>
#include <cassert>
#include <stack>

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
    assert (issame(separate_paren_groups("( ) (( )) (( )( ))") , {"()", "(())", "(()())"}));
    return 0;
}