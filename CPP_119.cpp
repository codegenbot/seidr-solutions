```cpp
#include <iostream>
#include <string>

bool match_parens(const std::string& lst) {
    int open = 0, close = 0;
    for (char x : lst) {
        if (x == '(') open++;
        else if (x == ')') close++;
    }
    return open == close;
}

int main() { 
    std::string line, lst; 
    std::cout << "Enter the strings: ";
    while((std::getline(std::cin, line)) && !line.empty()) {
        for(char c : line) {
            lst += c;
        }
        std::cin.ignore(); // consume newline characters
    }
    if (match_parens(lst)) {
        std::cout << "The parentheses are matched." << std::endl;
    } else {
        std::cout << "The parentheses are not matched." << std::endl;
    }
}