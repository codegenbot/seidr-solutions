#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string group;
    int balance = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                group += c;
            } else if (balance == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }
    
    return result;
}

int main() {
    std::string input = "(abc(def)(ghi))";
    std::vector<std::string> groups = separate_paren_groups(input);
    assert(issame(groups, std::vector<std::string>{"abc", "def", "ghi"}));
    
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), std::vector<std::string>{"()", "(())", "(()())"}));
    
    return 0;
}