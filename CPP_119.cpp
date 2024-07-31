```cpp
#include <iostream>
#include <cstring>

bool match_parens(const char* parens) {
    int count = 0;
    for (int i = 0; parens[i]; i++) {  
        if (parens[i] == '(')
            count++;
        else if (parens[i] == ')')
            count--;
        if (count < 0)
            return false;
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string of parentheses: ";
    std::getline(std::cin, input);
    std::cout << (match_parens(input.c_str())) ? "Valid" : "Invalid";
    return 0;
}