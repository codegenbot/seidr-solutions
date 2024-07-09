#include <iostream>
#include <vector>
#include <string>

bool match_parens(const std::vector<std::string>& parens) {
    int open = 0;
    int close = 0;

    for (const auto& s : parens) {
        for (char c : s) {
            if (c == '(') {
                ++open;
            } else if (c == ')') {
                ++close;
            }
        }
    }

    return open == close;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> lst;

    for(int i=0; i<n; ++i){
        std::string s;
        std::getline(std::cin, s);
        if (!s.empty()) {
            s.erase(s.begin(), s.end()); 
            lst.push_back(s);
        }
    }

    bool result = match_parens(lst);

    if (result) {
        std::cout << "Parentheses are balanced." << std::endl;
    } else {
        std::cout << "Parentheses are not balanced." << std::endl;
    }

    return 0;
}