```c++
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return sort(a.begin(), a.end()) == sort(b.begin(), b.end());
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for(auto &str : strings) {
        bool found = false;
        for(auto s : str) {
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