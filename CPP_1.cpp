#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(const std::string& input) {
    std::vector<std::string> result;
    int count = 0;
    std::string group;
    
    for (char c : input) {
        if (c == '(') {
            if (count > 0) {
                result.push_back(group);
            }
            group.clear();
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                result.push_back(group);
            }
            group.clear();
            if (count == 0 && !result.empty()) {
                result.back() = "(" + result.back() + ")";
            }
        } else {
            group.push_back(c);
        }
    }
    
    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    
    return 0;
}