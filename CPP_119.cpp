#include <iostream>
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> lst;
    for(int i = 0; i < n; ++i){
        std::string str;
        std::cout << "Enter string " << (i+1) << ": ";
        std::getline(std::cin, str);
        lst.push_back(str);
    }

    if(lst.size() > 0)
        std::cout << "Do the strings match? " << match_parens(lst) << std::endl;
    else
        std::cout << "No strings entered." << std::endl;

    return 0;
}