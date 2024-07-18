#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

string solve(const string& s) {
    // Modify each alpha character's case
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    
    // Reverse the string if it does not contain any alphabets
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    
    return 0;
}