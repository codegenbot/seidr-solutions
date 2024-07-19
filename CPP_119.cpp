#include <iostream>
#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    std::vector<std::string> lst;
    std::cout << "Enter the list of strings: ";
    std::string str;
    while(std::cin >> str) {
        lst.push_back(str);
    }
    std::cout << "Do the parentheses match? " << match_parens(lst) << std::endl;
    return 0;
}