```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for (const auto& s : strings) {
        bool same = false;
        for(const auto& sub_s : s) {
            if(sub_s.find(substring) != string::npos) {
                same = true;
                break;
            }
        }
        if(same){
            result.push_back(s);
        }
    }
    return result;
}