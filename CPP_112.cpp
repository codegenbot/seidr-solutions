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
    string rev_result = result;
    reverse(rev_result.begin(), rev_result.end());
    return {result, result == rev_result ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}