#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == s.npos) {
            result += ch;
        }
    }
    string palindrome_check = result;
    std::reverse(palindrome_check.begin(), palindrome_check.end());
    return {result, result == palindrome_check ? "True" : "False"};
}

bool issame(vector<string>& a, vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}