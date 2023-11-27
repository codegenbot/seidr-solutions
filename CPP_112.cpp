#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
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

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));

    return 0;
}