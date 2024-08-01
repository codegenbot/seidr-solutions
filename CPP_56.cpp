```cpp
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int i = 0;
    while(i < brackets.length()) {
        if(brackets[i] == '<') {
            i++;
            while(i < brackets.length() && brackets[i] != '>') i++;
            if(i >= brackets.length()) return false;
            i++;
        } else if(brackets[i] == '>') return false;
        else i++;
    }
    return true;
}