```cpp
#include <iostream>
#include <string>

bool match_parens(const std::string& s) {
    int open = 0, close = 0;
    for (char x : s) {
        if (x == '(') open++;
        else if (x == ')') close++;
    }
    return open == close;
}

int main() { 
    std::string line, lst; 
    std::cout << "Enter the strings: ";
    while((std::getline(std::cin, line)) && !line.empty()) {
        std::string temp = line;
        lst = temp;
        std::cin.ignore(); 
    }
    if (match_parens(lst)) {
        std::cout << "The parentheses are matched." << std::endl;
    } else {
        std::cout << "The parentheses are not matched." << std::endl;
    }
}