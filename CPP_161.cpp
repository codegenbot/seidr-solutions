#include <string>
#include <cctype>

int solve(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        if (std::isupper(s[i])) { 
            s[i] += std::tolower(s[i]) - std::toupper(s[i]); 
        }
    }
    return s.length();
}