#include <algorithm>
#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        string s1 = a[i];
        string s2 = b[i];
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 + s2 != sorted_list_sum({s1, s2})[0]) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> v) {
    vector<string> result;
    for (string str : v) {
        sort(str.begin(), str.end());
        result.push_back(str);
    }
    return result;
}