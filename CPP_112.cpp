#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    string s = "";
    for (string str : a) {
        s += str;
    }

    string c = "";
    for (string str : b) {
        c += str;
    }

    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }

    string original = result;
    reverse(result.begin(), result.end());
    return {original, original == result ? "True" : "False"};
}