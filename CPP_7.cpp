#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(find(b.begin(),b.end(),a[i]) == b.end()) return false;
    }
    return true;
}

vector<vector<string>> group_by_substring(vector<string> strings, string substring){
    vector<vector<string>> result;
    vector<string> temp;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos) {
            temp.push_back(str);
        } else {
            if(!temp.empty()) {
                result.push_back(temp);
                temp.clear();
            }
        }
    }
    if(!temp.empty()) {
        result.push_back(temp);
    }
    return result;
}