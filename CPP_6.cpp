#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<int> parse_nested_parens(const std::string& paren_string) {
    std::vector<int> depths;
    int max_depth = 0;
    int current_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = std::max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
        }
    }
    depths.push_back(max_depth);
    return depths;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::vector<int> depths = parse_nested_parens(input);
    for (int depth : depths) {
        std::cout << depth << " ";
    }
    assert(issame(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
    return 0;
}