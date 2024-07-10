#include <cassert>
#include <string>

int solve(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        if (std::isupper(s[i])) { 
            s[i] = std::tolower(s[i]);
        }
    }
    return s.length();
}

int main() {
    assert(solve("#ccc") == 3); 
    return 0;
}