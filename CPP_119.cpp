#include <iostream>
#include <vector>
#include <string>

bool matchParens(const std::vector<std::string>& lst) {
    int countOpen = 0, countClose = 0;

    for (const auto& str : lst) {
        for (char c : str) {
            if (c == '(') countOpen++;
            else if (c == ')') countClose++;
        }
    }

    return countOpen == countClose;
}

int main() {
    std::vector<std::string> input = {"(a)", "b(", "(c)"};
    std::cout << std::boolalpha << matchParens(input) << std::endl;
    return 0;
}