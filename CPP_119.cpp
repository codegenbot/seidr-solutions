#include <iostream>
#include <cstring>

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
    char input[100];
    std::cout << "Enter a string of parentheses: ";
    std::cin.getline(input, sizeof(input));
    std::cout << (match_parens(input)) ? "Valid" : "Invalid";
    return 0;
}