#include <algorithm>
#include <string>
using namespace std;

string solve(string s) {
    bool containsLetter = false;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            containsLetter = true;
            if (islower(s[i])) {
                s[i] = toupper(s[i]); // Reverse lower to upper case
            } else {
                s[i] = tolower(s[i]); // Reverse upper to lower case
            }
        }
    }

    if (!containsLetter) {
        reverse(s.begin(), s.end()); // Reverse the string if no letters found
    }

    return s;
}