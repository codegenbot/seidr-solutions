#include <string>
#include <algorithm>
#include <cctype>
#include <cassert>

using namespace std;

std::string solve(const std::string& s) {
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    
    if (all_of(s.begin(), s.end(), [](char c) { return !isalpha(c); })) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    // Add more test cases if needed
    
    return 0;
}