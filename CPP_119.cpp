#include <vector>
#include <string>

bool isMatch(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (int i = 0; i < lst.size(); i++) {
        for (char c : lst[i]) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return open == close;
}

int main() {
    std::vector<std::string> strings = {"(a+b)", "(a+b)+(c-d)"};
    for (const auto& str : strings) {
        if (isMatch({str})) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}