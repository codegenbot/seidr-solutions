#include <iostream>
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
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
    // Add your code here to read input from user and store in lst
    // For example:
    // std::string s;
    // while (std::cin >> s) {
    //     lst.push_back(s);
    // }
    
    // Then, call the function with the vector as an argument
    // For example:
    // std::cout << match_parens(lst) << std::endl;

    return 0;
}