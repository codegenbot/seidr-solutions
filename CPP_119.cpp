```c++
#include <iostream>
#include <string>

bool match_parens(const char* parens) {
    int count = 0;
    for (char c : std::string(parens)) {
        if (c == '(')
            count++;
        else if (c == ')')
            count--;
        if (count < 0)
            return false;
    }
    return count == 0;
}

std::cout << (match_parens("(()))") ? "Valid" : "Invalid");