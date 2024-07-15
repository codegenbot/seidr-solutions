#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(std::string paren_string);

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string input = "((group1)(group2)(group3))";
    std::vector<std::string> output = separate_paren_groups(input);
    std::vector<std::string> expected_output = {"(group1)", "(group2)", "(group3)"};
    assert(issame(output, expected_output));

    return 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}