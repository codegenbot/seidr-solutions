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
    std::vector<std::string> lst;
    // Add code to read input from user and store it in the vector
    // For example:
    for (int i = 0; i < 3; i++) {
        std::string str;
        std::cin >> str;
        lst.push_back(str);
    }
    
    if (match_parens(lst)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}