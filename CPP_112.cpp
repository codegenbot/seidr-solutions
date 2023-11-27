#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    // ... function code ...
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string res = "";
    
    // Delete characters in s that are equal to any character in c
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            res += s[i];
        }
    }
    
    // Check if the result string is palindrome
    string rev = res;
    reverse(rev.begin(), rev.end());
    bool isPalindrome = (res == rev);
    
    result.push_back(res);
    result.push_back((isPalindrome) ? "True" : "False");
    
    return result;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));

    // ... more test cases ...
}