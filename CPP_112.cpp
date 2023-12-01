#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
   
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
   
    return true;
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    bool is_palindrome = (result == reverse_result);
    return {result, (is_palindrome ? "True" : "False")};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), vector<string>{"", "True"}));
    return 0;
}