```cpp
#include <string>
#include <cassert>

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

int main() {
    assert(match_parens("(())") == true);
    assert(match_parens("((()))") == true);
    assert(match_parens(")())(") == false);
    return 0;
}