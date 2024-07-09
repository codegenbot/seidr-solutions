#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> lst;
    int open = 0, close = 0;
    for (std::string s; std::cin >> s; ) {
        lst.push_back(s);
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? 0 : 1;
}