#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

vector<string> reverse_delete(const string& s, const string& c) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    if (isPalindrome) {
        return {result, "True"};
    } else {
        return {result, "False"};
    }
}

bool issame(const vector<string>& v1, const vector<string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"amma", "True"}));
    return 0;
}