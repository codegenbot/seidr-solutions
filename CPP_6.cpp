#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(const std::string &paren_string) {
    std::vector<int> depths;
    int max_depth = 0;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            max_depth = std::max(max_depth, depth);
        } else if (c == ')') {
            depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            depth = 0;
        }
    }
    depths.push_back(max_depth);
    return depths;
}

int main() {
    if (issame(parse_nested_parens("(()(())((())))"), {4})) {
        std::cout << "Parens parsed successfully.";
    } else {
        std::cout << "Failed to parse nested parens.";
    }
    return 0;
}