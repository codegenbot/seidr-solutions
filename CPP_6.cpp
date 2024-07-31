#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string paren_string);

std::vector<int> parse_nested_parens(std::string paren_string){
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