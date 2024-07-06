#include <vector>
#include <string>

bool issame(string s1, string s2) {
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

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    for (const string& s : lst1) {
        bool found = false;
        for (const string& t : lst2) {
            if (issame(s, t)) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(s);
        }
    }
    return result;
}