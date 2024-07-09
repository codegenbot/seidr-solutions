#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (issame_helper(a[i], b[i]) == false) {
            return false;
        }
    }
    return true;
}

bool issame_helper(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    for (int i = 0; i < min(len1, len2); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }

    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}