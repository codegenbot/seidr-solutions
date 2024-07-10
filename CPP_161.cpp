#include <bits/stdc++.h>

using namespace std;

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (c >= 'a' && c <= 'z') ? c + ('A' - 'a') : c - ('A' - 'a');
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s.rbegin(), s.rend()) : result;
}