#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            count--;
            if (count >= 1) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int main() {
    assert(separate_paren_groups("( ) (( )) (( )( ))") == std::vector<std::string>{"()", "(())", "(()())"});
    return 0;
}