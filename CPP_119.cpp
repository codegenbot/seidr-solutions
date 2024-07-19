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
}

int main() {
    std::vector<std::string> lst;
    size_t totalLen = 0;

    std::cout << "Enter strings separated by spaces: ";
    for(std::string s; std::getline(std::cin, s), !s.empty();)
        totalLen += s.length(), lst.reserve(totalLen);
    for(std::string s; std::getline(std::cin, s), !s.empty();)
        lst.push_back(s);

    bool result = match_parens(lst);

    std::cout << (result ? "Yes\n" : "No\n");

    return 0;
}