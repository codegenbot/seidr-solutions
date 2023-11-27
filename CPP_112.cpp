#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c);
bool issame(vector<string> a, vector<string> b);

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

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result.push_back(string(1, s[i]));
        }
    }
    
    vector<string> reversed = result;
    reverse(reversed.begin(), reversed.end());
    
    string isPalindrome = (result == reversed) ? "True" : "False";
    
    vector<string> output;
    output.push_back("");
    output.push_back(isPalindrome);
    
    return output;
}

void main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
}