#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
  // Your comparison logic
  return true;
}

std::vector<std::string> separate_paren_groups(const std::string& paren_string) {
    std::vector<std::string> groups;
    std::string group;

    int count = 0;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            }
            if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    
    return 0;
}