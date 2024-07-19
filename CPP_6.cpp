#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string s) {
    int count = 0;
    std::vector<int> result;
    
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
    }
    
    result.push_back(count);
    return result;
}