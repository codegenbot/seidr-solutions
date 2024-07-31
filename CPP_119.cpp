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
    assert(match_parens("(())") == true);
    assert(match_parens("((()))") == true);
    std::string test1 = ")(";
    std::cout << (match_parens(test1.c_str()) ? "Yes" : "No") << std::endl;
    return 0;