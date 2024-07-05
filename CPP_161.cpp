#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string solve(string s) {
    bool hasLetter = false;
    
    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            break;
        }
    }
    if (hasLetter) {
        for (char &c : s) {
            if (isalpha(c)) {
                c = islower(c) ? toupper(c) : tolower(c);
            }
        }
    } else {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    string input;
    cin >> input;
    cout << solve(input) << endl;
    return 0;
}