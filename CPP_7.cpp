#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for(auto s : strings){
        bool isSame = true;
        for(string str : s){
            if(!issame({str}, {substring})){
                isSame = false;
                break;
            }
        }
        if(isSame)
            result.push_back(s);
    }
    return result;
}