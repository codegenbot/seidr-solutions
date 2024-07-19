#include <iostream>
#include <vector>
#include <string>

bool match_parens(const std::string& s) {
    int countOpen = 0, countClose = 0;
    
    for (char c : s) {
        if (c == '(') countOpen++;
        else if (c == ')') countClose++;
    }
    
    return countOpen == countClose;
}

int main() {
    std::vector<std::string> lst = {"(a(b+c))", "(d(e(f(g)))", "((h(i(j))))"};
    bool result = true;

    for (const auto& s : lst) {
        if (!match_parens(s)) {
            result = false;
            break;
        }
    }

    if(result) std::cout << "Yes;" << std::endl;  
    else std::cout << "No;" << std::endl;         

    return 0;
}