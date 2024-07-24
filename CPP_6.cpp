#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_nested_parens(std::string s) {
    std::vector<int> result;
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            result.push_back(count);
            count--;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::initializer_list<int> b) {
    return a == std::vector<int>(b);
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}