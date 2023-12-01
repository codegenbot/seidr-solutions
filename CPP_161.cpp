#include <cctype>
#include <algorithm>

string solve(string s){
    // Reverse the case of letters
    transform(s.begin(), s.end(), s.begin(), [](char c) {
        if (isalpha(c)) {
            return islower(c) ? toupper(c) : tolower(c);
        }
        return c;
    });

    // Reverse the string if it contains no letters
    if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        reverse(s.begin(), s.end());
    }

    return s;
}