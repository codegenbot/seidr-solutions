#include <iostream>
#include <vector>
#include <string>
#include <stack>

std::string match_parens(std::vector<std::string> lst) {
    std::string str = lst[0] + lst[1];
    std::stack<char> stk;
    
    for (char c : str) {
        if (c == '(') {
            stk.push(c);
        } else {
            if (stk.empty()) {
                return "No";
            }
            stk.pop();
        }
    }
    
    return stk.empty() ? "Yes" : "No";
}

int main() {
    std::vector<std::string> input;
    std::string str;
    for (int i = 0; i < 2; ++i) {
        std::cin >> str;
        input.push_back(str);
    }
    
    std::cout << match_parens(input) << std::endl;
    
    return 0;
}