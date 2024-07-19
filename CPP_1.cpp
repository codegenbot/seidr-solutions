#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <assert.h>

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<std::string> separate_paren_groups(std::string s) {
    std::vector<std::string> groups;
    int count = 0;
    std::string current_group;

    for (char c : s) {
        if (c == '(') {
            count++;
            current_group += c;
        } else if (c == ')') {
            count--;
            current_group += c;
            if (count == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }

    return groups;
}

int main() {
    std::vector<std::string> expected = {"()", "(())", "(()())"};
    std::vector<std::string> result = separate_paren_groups("( ) (( )) (( )( ))");
    assert(is_same(result, expected));
    return 0;
}