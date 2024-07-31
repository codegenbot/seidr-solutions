#include <cassert>

bool match_parens(char parens[]) {
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

int main() {
    assert(match_parens("())") == true);
    return 0;
}