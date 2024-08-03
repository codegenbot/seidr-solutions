#include <vector>
#include "issame_function.h"

bool issame(vector<string> s1, vector<string> s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    for (int i = 0; i < s1.size(); i++) {
        if (find(s2.begin(), s2.end(), s1[i]) == s2.end()) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}