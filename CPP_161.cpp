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
    if(result.empty()) {
        string temp = s;
        std::reverse(temp.begin(), temp.end());
        return temp;
    } else {
        return result;
    }
}

int main() {
    assert (solve("#ccc") == "#CCC");
    return 0;
}