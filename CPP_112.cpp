#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<string> reverse_delete(string s, string c);

bool issame(vector<string> a, vector<string> b);

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string rev_result = result;
    reverse(rev_result.begin(), rev_result.end());
    bool is_palindrome = (result == rev_result);
    vector<string> output = {result, (is_palindrome ? "True" : "False")};
    return output;
}

bool areEqual(vector<string> a, vector<string> b) {
    return a == b;
}