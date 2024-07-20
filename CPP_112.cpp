```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> s1, vector<string> s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char i : s) {
        bool found = false;
        for (char j : c) {
            if (i == j) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += i;
        }
    }
    result.push_back(temp);
    string rev = temp;
    reverse(rev.begin(), rev.end());
    if (temp == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}