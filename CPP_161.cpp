#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).rbegin()->reverse().s : result;
}

int main() {
    assert (solve("#ccc") == "#CCC");
    return 0;