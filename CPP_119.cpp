#include <vector>
#include <string>

bool isMatched(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (int i = 0; i < lst.size(); i++) {
        for (char c : lst[i]) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close;
}

int main() {
    std::vector<std::string> lst = {"(1,2)", "(3,4)", "5", "(6,7)"};
    if (isMatched(lst)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}