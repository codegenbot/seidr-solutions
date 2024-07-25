#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(const std::string& input) {
    int count = 0;
    std::vector<int> result;
    
    for (char c : input) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
    }
    
    result.push_back(count);
    
    return result;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}