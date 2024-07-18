#include <algorithm>
#include <cassert>

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    
    if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    // Add more test cases here
    
    return 0;
}