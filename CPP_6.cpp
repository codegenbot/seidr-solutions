#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    int current_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = std::max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }

    result.push_back(max_depth);

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    std::vector<int> result1 = parse_nested_parens("(() ())");
    std::vector<int> result2 = {2, 2};
    
    assert(std::equal(result1.begin(), result1.end(), result2.begin(), result2.end()));
    
    return 0;
}