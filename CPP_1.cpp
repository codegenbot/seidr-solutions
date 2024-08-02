#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string temp;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                temp += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                temp += c;
            } else {
                result.push_back(temp);
                temp = "";
            }
        }
    }

    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}