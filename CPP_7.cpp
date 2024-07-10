#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(find(b.begin(),b.end(),a[i]) == b.end()) return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for (const auto& str : strings) {
        bool found = false;
        for(const auto& s : str) {
            if(s.find(substring) != string::npos) {
                found = true;
                break;
            }
        }
        if(found) {
            result.push_back(str);
        }
    }
    return result;
}