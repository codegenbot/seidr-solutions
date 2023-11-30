#include <string>
#include <cassert>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

vector<string> reverse_delete(string s, string c);

int main() {
    // Test case
    string s = "hello world";
    string c = "aeiou";
    vector<string> result = reverse_delete(s, c);
    assert(issame(result, {"hll wrld", "False"}));

    return 0;
}

vector<string> reverse_delete(string s, string c) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return {result, (isPalindrome ? "True" : "False")};
}