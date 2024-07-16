#include <string>
#include <algorithm>
#include <vector>
#include <cassert>

pair<string, string> reverse_delete(string s, string c);

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

pair<string, string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_reverse = result;
    reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse ? "True" : "False"};
}