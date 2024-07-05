#include <iostream>
#include <algorithm> // for reverse
#include <cctype>   // for isalpha, isupper, islower, toupper, tolower
#include <string>

using namespace std;

string solve(string s){
    bool hasLetter = false;
    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            break;
        }
    }
    if (hasLetter) {
        for (char &c : s) {
            if (islower(c)) c = toupper(c);
            else if (isupper(c)) c = tolower(c);
        }
    } else {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    // Test cases
    cout << solve("#ccc") << endl; // Output: "#CCC"
    return 0;
}