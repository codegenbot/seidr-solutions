#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string resultReverse = result;
    reverse(resultReverse.begin(), resultReverse.end());
    return {result, result == resultReverse ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), vector<string>{"", "True"}));
    return 0;
}