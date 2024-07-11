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
        bool is_same = true;
        for(const auto& str: s){
            if(filter_by_substring({str}, substring).empty()){
                is_same = false;
                break;
            }
        }
        if(is_same) result.push_back(s);
    }
    return result;
}