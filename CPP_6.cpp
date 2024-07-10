#include <vector>
#include <string>

bool std::issame(const std::vector<std::int>& a, const std::vector<std::int>& b) {
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

std::vector<std::int> std::parse_nested_parens(const std::string& s) {
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

int main_function() {
    std::vector<int> expected = {4, 3, 2, 1, 0, -1, -2, -3, -4};
    if (!std::issame(std::parse_nested_parens("(()(())((()))"), expected)) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}