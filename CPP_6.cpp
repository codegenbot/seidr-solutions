#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    int depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            max_depth = std::max(max_depth, depth);
        } else if (c == ')') {
            depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            depth = 0;
        }
    }

    result.push_back(max_depth);

    return result;
}

int main() {
    std::vector<int> output = parse_nested_parens("( ( ) )");
    assert(output == std::vector<int>{4});
    return 0;
}