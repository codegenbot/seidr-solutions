```cpp
#include <iostream>
#include <string>

bool match_parens(const char* parens) {
    int count = 0;
    for (int i = 0; *parens != '\0'; i++) {  
        if (*parens == '(')
            count++;
        else if (*parens == ')')
            count--;
        if (count < 0)
            return false;
    }
    return count == 0;
}

int main() {
    std::cout << "Enter a string of parentheses: ";
    std::string input;
    std::getline(std::cin, input);
    std::cout << (match_parens(input.c_str().c_str())) ? "Valid" : "Invalid";
    return 0;
}