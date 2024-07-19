#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<assert.h>

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> a_copy = a;
    std::vector<std::string> b_copy = b;
    
    std::sort(a_copy.begin(), a_copy.end());
    std::sort(b_copy.begin(), b_copy.end());
    
    return a_copy == b_copy;
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