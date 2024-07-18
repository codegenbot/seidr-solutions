#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cassert>

using namespace std;

string solve(const string& s) {
    string result = s;
    for (char &c : result) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (result.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
        reverse(result.begin(), result.end());
    }
    return result;
}

int main() {
    assert (solve("#ccc") == "#CCC");
    return 0;
}