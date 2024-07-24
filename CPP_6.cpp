#include <vector>
#include <string>
#include <cassert> // To use assert

bool parse_nested_parens(std::string s) {
    std::vector<int> nested_parens;
    for (char c : s) {
        if (c == '(') {
            nested_parens.push_back(4);
        } else if (c == ')') {
            if (nested_parens.empty() || nested_parens.back() != 4) {
                return false;
            }
            nested_parens.pop_back();
        }
    }
    return nested_parens.empty();
}

int main() {
    assert(parse_nested_parens("(())"));
}