#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    string s = a + b;
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    return {result, result == reverse_result ? "True" : "False"};
}

assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));