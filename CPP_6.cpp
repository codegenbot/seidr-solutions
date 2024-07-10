```
#include <vector>
#include <string>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> parse_nested_parens(const std::string& s) {
    std::vector<int> result;
    int num = 0;
    for (char c : s) {
        if (c == '(') {
            num++;
        } else if (c == ')') {
            if (num > 0) {
                result.push_back(num);
                num--;
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> output = parse_nested_parens("(()(())((()))");
    for (int i : output) {
        for (int j = -4; j <= 0; ++j) {
            if (issame({i}, {j})) {
                std::cout << j;
                break;
            }
        }
        std::cout << " ";
    }
    return 0;
}