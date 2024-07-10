#include <vector>
#include <string>

std::vector<int> parse_nested_parens(const std::string& s) {
    std::vector<int> result;
    int level = 0;
    for (char c : s) {
        if (c == '(') {
            level++;
        } else if (c == ')') {
            level--;
        }
        if (level == 0 && !result.empty()) {
            result.push_back(std::abs(result.back()));
            result.pop_back();
        }
    }
    return result;
}

bool same(std::vector<int> a, std::vector<int> b) {
    // Compare elements of two vectors
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(same(parse_nested_parens("(()(())((()))"), {4, 3, 2, 1, 0, -1, -2, -3, -4}));
    return 0;
}