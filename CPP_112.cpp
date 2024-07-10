#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string new_s = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            new_s += ch;
        }
    }
    string rev_s = new_s;
    reverse(rev_s.begin(), rev_s.end());
    result.push_back(new_s);
    result.push_back((new_s == rev_s) ? "True" : "False");
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}