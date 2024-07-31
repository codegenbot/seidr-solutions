```cpp
#include <cassert>
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

int main() {
    assert(std::string("()") == true);
    assert(std::string("((()))") == true);
    assert(std::string("())") == false);
    return 0;
}