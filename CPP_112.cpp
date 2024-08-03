#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a[0].compare(b[0]) == 0 && a[1].compare(b[1]) == 0;
}

vector<string> reverse_delete(string s, string c) {
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