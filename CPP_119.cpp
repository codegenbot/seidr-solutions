```
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
    std::cout << (match_parens("((()))") ? "Valid" : "Invalid");
    return 0;
}