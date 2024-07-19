```cpp
#include <iostream>
#include <vector>
#include <string>

bool match_parens(const std::vector<std::string>& lst) {
    bool result = true;
    int countOpen = 0, countClose = 0;

    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') countOpen++;
            else if (c == ')') countClose++;
        }
    }

    return countOpen == countClose;

    std::vector<std::string> user_input;
    std::cout << "Enter parentheses expressions (enter 'q' to quit): ";
    while (true) {
        std::string s;
        std::cin >> s;
        if (s == "q") break;
        user_input.push_back(s);
    }
    bool result_user = match_parens(user_input);

    std::cout << (result_user ? "Yes\n" : "No\n");
}

int main() {
}