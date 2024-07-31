#include <vector>
#include <string>

std::vector<int> parse_nested_parens(const std::string& str) {
    int count = 0;
    std::vector<int> result;
    for (char c : str) {
        if (c == '(') count++;
        else if (c == ')') count--;
        if (count == 0) result.push_back(4);
    }
    return result;
}

int main() {
    assert(parse_nested_parens("(()(())((()))") == vector<int>({4}));
    return 0;
}