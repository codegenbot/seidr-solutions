```cpp
#include <algorithm>
#include <iostream>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(a[i] == b[i]))
            return false;
    }
    return true;
}

vector< pair<string, string> > reverse_delete(string s, string c) {
    vector<string> result;
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, ch));
        }
    }
    string revResult = "";
    for (int i = result.size() - 1; i >= 0; --i) {
        revResult += result[i];
    }
    return {{revResult, (result.size() == s.size() ? "True" : "False")}};
}