#include <vector>
#include <string>

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (!issame(a[i], b[i])) {
            return false;
        }
    }
    return true;
}

std::vector<int> parse_nested_parens(const std::string& s) {
    std::vector<std::vector<int>> result;
    int num = 0;
    for (char c : s) {
        if (c == '(') {
            num++;
        } else if (c == ')') {
            if (num > 0) {
                result.push_back(std::vector<int>(1, num));
                num--;
            }
        }
    }
    return parse_expected(result);
}

std::vector<int> parse_expected(const std::vector<std::vector<int>>& vec) {
    std::vector<int> result;
    for (const auto& v : vec) {
        for (int i = 0; i < v.size(); ++i) {
            for (int j = 0; j < v[i]; ++j) {
                if (i == 0) {
                    result.push_back(-j - 1);
                } else {
                    result.push_back(i - 1);
                }
            }
        }
    }
    return result;
}

int main_function() {
    std::vector<int> expected = {4, 3, 2, 1, 0, -1, -2, -3, -4};
    if (!issame(parse_nested_parens("(()(())((()))"), std::vector<std::vector<int>>(1, parse_expected))) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}