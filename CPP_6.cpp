#include <vector>

std::vector<int> parse_nested_parens(std::string paren_string);

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

std::vector<int> parse_nested_parens(std::string paren_string) {
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
            current_depth = 0;
        }
    }

    depths.push_back(max_depth);

    return depths;
}

int main() {
    std::string input = "( ( ) ( ) ) ( )";
    std::vector<int> result = parse_nested_parens(input);

    // Check if the output matches the expected vector
    std::vector<int> expected_output = {2, 2};
    std::assert(issame(result, expected_output));

    return 0;
}