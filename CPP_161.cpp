#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>
using namespace std;

string solve(string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    // Add more test cases here
    return 0;
}