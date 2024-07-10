#include <vector>
#include <algorithm>
using namespace std;

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
        bool same = true;
        for(int i = 0; i < str.size(); i++){
            if(str[i].find(substring) == string::npos) same = false;
        }
        if(same) result.push_back(str);
    }
    return result;
}