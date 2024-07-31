using namespace std;

#include <iostream>
#include <vector>
#include <string>

std::vector<int> parse_nested_parens(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count > 0) {
                count--;
            }
        }
    }
    return {count + 1};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size();
}

int main() {
    assert(issame(parse_nested_parens("(()(())((()))"), {1,4}));
}