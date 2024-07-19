```cpp
#include <vector>
#include <algorithm>
#include <string>

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
    string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    string revResult = result;
    reverse(revResult.begin(), revResult.end());
    return {{"", result}, (result == revResult ? "True" : "False")};
}