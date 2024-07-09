```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a,vector<vector<string>> b){
    for(auto str : a) {
        bool found = false;
        for(auto vec : b) {
            if(find(vec.begin(), vec.end(), str) != vec.end()) {
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<string> strings, string substring){
    vector<vector<string>> result;
    for(const auto& str : strings){
        bool issameResult = true;
        for(auto& vec : strings) {
            if(str.find(substring) == string::npos && !issame({vec}, {{str}})) {
                issameResult = false;
                break;
            }
        }
        if(issameResult)
            result.push_back({str});
    }
    return result;
}