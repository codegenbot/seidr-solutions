#include <vector>
#include <cassert>

std::vector<int> parse_nested_parens(std::string s) {
    std::vector<int> depths;
    int current_depth = 0;

    for (char c : s) {
        if (c == '(') {
            current_depth++;
        } else if (c == ')') {
            depths.push_back(current_depth);
            current_depth--;
        }
    }

    return depths;
}

bool issame(std::vector<int> a, std::vector<int> b) {
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
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}