#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (!current_group.empty()) {
                result.push_back(current_group);
            }
            current_group = "(";
        } else if (c == ')') {
            current_group += ")";
            result.push_back(current_group);
            current_group = "";
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}

int main() {
    std::vector<std::string> input_groups = separate_paren_groups("()(()())");
    std::vector<std::string> expected_output = {"()", "()", "()", "()"};

    assert(input_groups == expected_output);

    assert(separate_paren_groups("( ) (( )) (( )( ))") == std::vector<std::string>{"()", "(())", "(()())"});

    return 0;
}