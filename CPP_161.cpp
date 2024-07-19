#include <algorithm>
#include <cctype>

std::string solve(std::string s);

int main() {
    assert(solve("#ccc") == "#CCC");
    
    return 0;
}

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    
    std::reverse(s.begin(), s.end());
    
    return s;
}