```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for(auto s : strings){
        bool found = false;
        for(auto str : s){
            if(str.find(substring) != string::npos){
                found = true;
                break;
            }
        }
        if(found)
            result.push_back(s);
    }
    return result;
}