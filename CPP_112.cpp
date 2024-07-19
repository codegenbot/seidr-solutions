#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(a[i] == b[i]))
            return false;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string resStr = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            resStr += ch;
        }
    }
    string revResStr = resStr;
    reverse(revResStr.begin(), revResStr.end());
    result.push_back(resStr);
    if (resStr == revResStr)
        result.push_back("True");
    else
        result.push_back("False");
    return result;
}