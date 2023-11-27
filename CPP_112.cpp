#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c);

bool issame(vector<string> a, vector<string> b);

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string res = "";

    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            res += s[i];
        }
    }

    result.push_back(res);

    string rev = res;
    reverse(rev.begin(), rev.end());

    if (res == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}