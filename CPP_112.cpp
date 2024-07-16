#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

pair<string, string> reverse_delete(const string& s, const string& c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string palindrome_check = result;
    reverse(palindrome_check.begin(), palindrome_check.end());
    return {result, result == palindrome_check ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}