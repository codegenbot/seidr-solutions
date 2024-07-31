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

bool isSameVector(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int test() {
    assert(parse_nested_parens("(()(())((()))") == std::vector<int>({4}));
    return 0;
}