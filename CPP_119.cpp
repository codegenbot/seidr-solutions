#include <iostream>
#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int balance = 0;
    for (const std::string& str : lst) {
        for (char c : str) {
            if (c == '(') {
                balance++;
            } else {
                if (balance == 0) {
                    return "No";
                }
                balance--;
            }
        }
    }
    return (balance == 0) ? "Yes" : "No";
}