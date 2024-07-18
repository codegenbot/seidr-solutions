#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string solve(string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Result: " << solve(input) << endl;
    
    return 0;
}