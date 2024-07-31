#include <vector>

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }

    for (size_t i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> parse_nested_parens(std::string paren_string);

int main() {
    std::vector<int> result = parse_nested_parens("((())()())");
    for (int val : result) {
        std::cout << val << " ";
    }
    return 0;
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            result.push_back(depth);
        } else if (c == ')') {
            result.push_back(depth);
            depth--;
        }
    }
    return result;
}