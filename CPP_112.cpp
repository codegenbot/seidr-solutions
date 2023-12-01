#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    bool is_palindrome = (result == reverse_result);
    vector<string> output;
    output.push_back(result);
    output.push_back(is_palindrome ? "True" : "False");
    return output;
}

bool is_same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(is_same(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}