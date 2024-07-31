```cpp
#include <iostream>
#include <string>

bool match_parens(const char* parens) {
    std::string str(parens);  
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

int main() {
    std::cout << (match_parens("(()))") ? "Valid" : "Invalid";
}