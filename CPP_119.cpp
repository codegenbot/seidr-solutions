#include <iostream>
#include <vector>
#include <string>

bool match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close;
}

int main() {
    std::vector<std::string> input;
    while(true) {
        std::string s;
        std::cin >> s;
        if(s != "exit")
            input.push_back(s);
        else
            break;
    }
    assert(match_parens(input));
    return 0;
}