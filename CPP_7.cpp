#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for(auto &s : strings) {
        bool is_sub = false;
        for(auto &str : s) {
            if(str.find(substring) != string::npos) {
                is_sub = true;
                break;
            }
        }
        if(is_sub)
            result.push_back(s);
    }
    return result;
}