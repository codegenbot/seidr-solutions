#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_nested_parens(std::string str) {
    std::vector<int> result;
    
    int count = 0;
    for (char c : str) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            result.push_back(count + 1);
        }
    }
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}