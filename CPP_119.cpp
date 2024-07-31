```cpp
#include <cassert>
#include <string>

bool match_parens(char* parens) {
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
    assert(match_parens("()") == true);
    assert(match_parens("((()))") == true);
    assert(!match_parens("())"));
    std::string str1 = "YES";
    if (match_parens("()")) std::cout << str1;
    else std::cout << "NO";
}