#include <string>
#include <algorithm>

std::string solve(const std::string& s) {
    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    
    if (std::count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        std::reverse(s.begin(), s.end());
    }
    
    return s;
}