#include <iostream>
#include <vector>
#include <string>

bool issame(vector<std::string> vec_a, vector<std::string> vec_b) {
    if(vec_a.size() != vec_b.size()) {
        return false;
    }
    for(int i = 0; i < vec_a.size(); i++) {
        if(vec_a[i] != vec_b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<std::string> strings, string prefix){
    vector<vector<string>> resultVector;
    for(string s : strings){
        if(s.find(prefix) == 0)
            resultVector.push_back({s});
    }
    return resultVector;