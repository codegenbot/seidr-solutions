#include <iostream>
#include <string>

bool match_parens(const std::string& parens) {
    int count = 0;
    for (char c : parens) {  
        if (c == '(')
            count++;
        else if (c == ')')
            count--;
        if (count < 0)
            return false;
    }
    return count == 0;
}

int main() {
    std::string parens;
    std::cout << "Enter parentheses: ";
    std::getline(std::cin, parens);
    std::cout << (match_parens(parens)) ? "Valid" : "Invalid";
    return 0;
}