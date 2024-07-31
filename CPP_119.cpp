```cpp
#include <cassert>
#include <string>

bool match_parens(std::string parens) {
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

assert(match_parens("()") == true);
assert(match_parens("((()))") == true);
assert(match_parens("())") == false);