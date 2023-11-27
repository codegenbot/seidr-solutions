#include <iostream>
#include <vector>
#include <string>
#include <memory_resource>

std::pmr::vector<int> parse_nested_parens(std::string paren_string) {
    std::pmr::vector<int> levels;
    int max_level = 0;
    int current_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_level++;
            max_level = std::max(max_level, current_level);
        }
        else if (c == ')') {
            current_level--;
        }
        else if (c == ' ') {
            levels.push_back(max_level);
            max_level = 0;
            current_level = 0;
        }
    }

    levels.push_back(max_level);

    return levels;
}

bool issame(std::pmr::vector<int> a, std::pmr::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(parse_nested_parens("(()(())(()))"), {4}));

    return 0;
}