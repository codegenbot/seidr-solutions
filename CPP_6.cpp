#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2){
    return v1 == v2;
}

std::vector<int> parse_nested_parens(std::string paren_string);

int main() {
    std::vector<int> result = parse_nested_parens("(()(()))");
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