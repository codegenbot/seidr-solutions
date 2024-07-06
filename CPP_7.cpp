#include <vector>
#include <string>

bool issame(string s1, string s2) {
    for(int i=0; i<s1.length(); i++) {
        if(s1[i] != s2[i]) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings) {
        if(issame(str, substring))
            result.push_back(substring);
        else
            result.push_back(str);
    }
    return result;
}