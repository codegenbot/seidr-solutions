#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return sort(a.begin(), a.end()) == sort(b.begin(), b.end());
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for(auto str : strings) {
        if(find_if(str.begin(), str.end(), [substring](const string& s){ return s.find(substring) != string::npos; }) != str.end()) {
            result.push_back(str);
        }
    }
    return result;
}