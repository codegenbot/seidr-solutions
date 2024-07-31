#include <iostream>
#include <cstring>

bool match_parens(const char* parens) {
    std::string str(parens, strlen(parens));  
    int count = 0;
    for (char c : str) {  
        if (c == '(')
            count++;
        else if (c == ')')
            count--;
        if (count < 0)
            return false;
    }
    return count == 0;
}

std::cout << (match_parens("(()))") ? "Valid" : "Invalid";