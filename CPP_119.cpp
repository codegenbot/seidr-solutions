#include <cassert>

bool match_parens(char* parens) {
    int count = 0;
    for (char c : {parens[0], parens[1]}) {
        if (c == '(')
            ++count;
        else
            --count;
    }
    return count == 0;
}

int main() {
    assert(match_parens({')', '('}) == true);
    
    return 0;
}