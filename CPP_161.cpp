#include <algorithm>
#include <cctype>
#include <string>

std::string solve(const std::string& s) {
    std::string result = s;
    
    for (char &c : result) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    
    if (count_if(result.begin(), result.end(), isalpha) == 0) {
        reverse(result.begin(), result.end());
    }
    
    return result;
}