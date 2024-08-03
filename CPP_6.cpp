#include <vector>
#include <string>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string str) {
    int count = 0;
    std::vector<int> result;
    
    for (char c : str) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count > 0) {
                result.push_back(count);
                count--;
            }
        }
    }
    
    return result;
}

int main() {
    assert(is_same(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
    return 0;
}