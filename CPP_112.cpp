#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp;
    
    // Delete characters in s that are equal to any character in c
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            temp += s[i];
        }
    }
    
    // Check if the result string is palindrome
    string reversed = temp;
    reverse(reversed.begin(), reversed.end());
    
    if (temp == reversed) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
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

int main() {
    assert (issame(reverse_delete("mamma", "mia") , {"", "True"}));
    assert (issame(reverse_delete("hello", "hi") , {"heo", "False"}));
    assert (issame(reverse_delete("programming", "rain") , {"pogmmng", "False"}));
    
    return 0;
}